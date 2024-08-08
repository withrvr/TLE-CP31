#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1000000007
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

// ll gcd(ll a, ll b) {
//     if (b == 0) return a;
//     return gcd(b, a % b);
// }

void solve() {
    ll n, val, res = 0;
    cin >> n;

    for (ll i = 1; i <= n; ++i) {
        cin >> val;
        res = gcd(res, abs(val - i));
    }

    cout << res << endl;
}

// void pre_fun()
// {
// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // pre_fun();

    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; ++i) {
        solve();
    }

    return 0;
}
