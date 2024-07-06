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

    // logic
    vector<ll> res;
    ll val;
    cin >> val;
    res.push_back(val);
    ll last = val;

    for (i = 1; i < n; ++i) {
        cin >> val;

        if (last > val)
            res.push_back(1);
        res.push_back(val);
        last = val;
    }

    // printing
    cout << res.size() << endl;
    for (ll &val : res)
        cout << val << " ";
    cout << endl;
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
