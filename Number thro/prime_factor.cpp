
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define nl cout<<"\n";
string spc=" ";


const int MAX = 1e6;
int lp[MAX+5]; // lp[i] = least prime factor of i
 
void primefactor()
{
    for(int i = 1; i <= MAX; i++)
    {
        lp[i] = i;
    }
    for(int i = 2; i * i <= MAX; i++)
    {
        if(lp[i] != i) continue;
        for(int j = i * i;  j <= MAX; j += i)
        {
            if(lp[j] == j) lp[j] = i;
        }
    }
}

vector<pair<int,int>> findPrimeFactors(int n)
{
    vector<pair<int,int>> f;
    while(n > 1)
    {
        int j = lp[n];
        int cnt = 0;
        while(n%j == 0)
        {
            n/=j; ++cnt;
        }
        f.push_back({j,cnt});
    }
    return f;
}




void solve(){

    primefactor();
    int n; cin>>n;
    auto f= findPrimeFactors(n);
    for(auto [p,pow]:f){
        cout<<p<<spc<<pow<<endl;
    }








}



int main()
{
//    #ifndef ONLINE JUDGE
//    freopen("test_input.txt","r",stdin);
//    #endif
    ios::sync_with_stdio(0);  cin.tie(0);
    //int n; cin>>n;
    //while(n--)
        solve();


    return 0;
}

