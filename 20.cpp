#include<bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define FORD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define endl '\n'
int mod = 1e9 + 7;
ll powMod(int a, int n){
	ll res = 1;
	while(n){
		if(n % 2 == 1){
			res *= a;
			res %= mod;
		}
		a = (1ll * a * a) % mod;
		n /= 2;
	}
	return res;
}
ll dem(int n, int p){
	int res = 0;
	while(n >= p){
		res += n/p;
		n/=p;
	}
	return res;
}
int prime[1000005];
void sang(){
	for(int i = 1; i <= 1e6; i++) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= 1e3; i++){
		if(prime[i]){
			for(int j = i*i; j <= 1e6; j+=i){
				prime[j] = 0;
			}
		}
	}
}
int main(){
	//n!/(k!*(n-k)!)
	sang();
	int n, k; cin >> n >> k;
	ll res = 1;
	for(int i = 2; i <= n; i++){
		if(prime[i]){
			ll mu = dem(n, i) - dem(k, i) - dem(n-k, i);
			res *= powMod(i, mu);
			res %= mod;
		}
	}
	cout << res;
}








