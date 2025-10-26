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
    ll n; cin >> n;

    if(n == 1){
        cout << 1<< nl;
        return 0;
    }

    ll one_count = __builtin_popcountll(n);
    if(one_count == 1){
        cout << n - 1 << nl;
        return 0;
    }

    ll bit_reprasentation = __lg(n);
    ll l = 0, r = bit_reprasentation, ans =0;

    while(l <= r){
        ll m = ans | (1ll << l);
        m |= ((1ll << r));
        if(m <= n){
            ans = m;
        }
        l++, r--;
    }
    cout << ans << nl;
}
// https://codeforces.com/gym/105925/problem/H