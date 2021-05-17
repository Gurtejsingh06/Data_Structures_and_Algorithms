#include<bits/stdc++.h>
#define mod 1e9+7
//#define for(i,a,b) for(long long int i=a;i<b;i++)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define endl "\n"
using namespace std;

typedef long long int ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;


//void solve(){

//}
int fac(ll n){
	ll ans = 1;
	if(n == 0 || n == 1)
		return 1;
	else
	{
		while(n > 1){
			ans  *= n;
			n--;
		}
		return ans ;
	}
}
ll nCr(ll n, ll r){
	ll nF= fac(n);
	ll nrF = fac(n-r);
	ll rF = fac(r);
	return nF/(nrF * rF); 
}
void pascalT(ll n){
	
	for (ll i = 0; i < n; ++i)
	{
		for (ll j = 0; j <= i; ++j)
		 {
		 	cout << nCr(i,j) <<" "; 
		 } 
		 cout << endl;
	}
}
int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//ll t; cin >> t;
	//while(t--) solve();
	ll n; cin >> n;
	pascalT(n);
	return 0;

}