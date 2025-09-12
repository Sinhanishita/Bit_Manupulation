/// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;

#define slow ios_base::sync_with_stdio(false); cin.tie(NULL)
#define nl '\n'
#define ll long long
#define sp ' '
#define PI 3.14159265358979323846
#define __lcm(a, b) ((a / __gcd(a, b)) * b)
#define db double
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define cn continue
#define mod 1000000007


int32_t main() {
    slow;
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n);
        for(int i =0; i< n; i++) cin >> v[i];
        for(int mask =0; mask < (1 << n); mask++){
        	for(int i =0; i < n; i++){
        		if(mask >> i & 1) cout << v[i] << ':' <<  (mask >> i) << sp;
        		else cout << v[i] << ':' <<  (mask >> i) << sp;
        	}
        	cout << nl;
        }
       
    }
}