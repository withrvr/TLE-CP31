#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll a, b;
    cin >> a >> b;

    if (a == b) {
        cout << 0 << " " << 0 << endl;
    } else {
        ll diff = abs(a - b);  // excitement

        ll rem = a % diff;
        ll steps = min(rem, diff - rem);

        cout << diff << " " << steps << endl;
    }
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
