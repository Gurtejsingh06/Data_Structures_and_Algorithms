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
void fib(int n){
	ll first = 0;
	ll second = 1;
	ll next;
	for (int i = 0; i < n; ++i)
	{
		cout << first << endl;
		next = first + second;
		first = second;
		second = next;

	}
}

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//ll t; cin >> t;
	//while(t--) solve();
	ll n; cin >> n;
	fib(n);
	return 0;

}