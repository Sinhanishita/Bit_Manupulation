/// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;

#define slow ios_base::sync_with_stdio(false); cin.tie(NULL)
#define nl '\n'
#define ll long long
#define sp ' '

int32_t main() {
    slow;
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll leftmost = 1LL << __lg(n);
        cout << leftmost - 1 << nl;
    }
}
// i < (1 << n) got TLE but this is not : (1ll << i ) <= n
//another way: ll leftmost = 1LL << (63 - __builtin_clzll(n));
// https://codeforces.com/contest/1527/problem/A