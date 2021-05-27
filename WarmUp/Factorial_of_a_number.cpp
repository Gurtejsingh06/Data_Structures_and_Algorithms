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
void fac(int n){
	ll ans = 1;
	if(n == 0 || n == 1)
		cout << 1 <<endl;
	else
	{
		while(n > 1){
			ans  *= n;
			n--;
		}
		cout << ans ;
	}
}

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//ll t; cin >> t;
	//while(t--) solve();
	ll n; cin >> n;
	fac(n);
	return 0;

}
