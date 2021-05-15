#include<bits/stdc++.h>
#define mod 1e9+7
//#define for(i,a,b) for(long long int i=a;i<b;i++)
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;

typedef long long int ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;

void solve(){
	ll a,b;	cin >> a >> b;
	for (ll i = a; i <= b; i++ )
	{
		ll j;
		for ( j = 2; j < i; j++)
		{
			if(i%j == 0)
				break;
		}
		if (j == i)
			cout << i << " ";		
	}
	
}

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll t; cin >> t;
	while(t--) solve();
	return 0;

}