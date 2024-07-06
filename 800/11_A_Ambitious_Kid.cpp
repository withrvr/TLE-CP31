#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll i, n;
    cin >> n;

    ll val, mini = LONG_MAX;
    for (i = 0; i < n; ++i) {
        cin >> val;

        mini = min(mini, abs(val));
    }

    cout << mini << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    // cin >> t;
    for (ll i = 1; i <= t; ++i) {
        solve();
    }

    return 0;
}
