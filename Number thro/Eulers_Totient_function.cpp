#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define nl cout<<"\n";
#define YES cout<<"YES"<<"\n";
#define NO cout<<"NO"<<"\n";
string spc=" ";

int totient(int n){
	int result = n;
	for(int i=2; i * i <=n; ++i){
		if(n%i==0){
			while(n%i == 0){
				n/=i;
			}
			result -= result/i;
		}
	}

	if(n>1)
		result -= result/n;

	return result;
}



void solve(){
	int n; cin>>n;
	cout<<totient(n)<<endl;





}





int main()
{
    ios::sync_with_stdio(0);  cin.tie(0);
    int n; cin>>n;
    while(n--){
        solve();
    }





    return 0;
}
