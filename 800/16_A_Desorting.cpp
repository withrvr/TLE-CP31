#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll i, n;
    // bool is_sorted = true;
    cin >> n;

    vector<ll> arr(n);
    ll last = LONG_MIN, mini_diff = LONG_MAX;
    for (ll &val : arr) {
        cin >> val;

        mini_diff = min(mini_diff, val - last);

        // if (last > val)
        //     is_sorted = false;

        last = val;
    }

    // cout << mini_diff << " ";

    if (mini_diff < 0) {  // ie. not sorted
        cout << 0 << endl;
    } else {
        cout << ((mini_diff / 2) + 1) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; ++i) {
        solve();
    }

    return 0;
}
