#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1000000007
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll n, val;
    cin >> n;

    ll maxi = 0, count = 0;
    for (ll i = 0; i < n; ++i) {
        cin >> val;

        // logic
        if (val == 1) {
            maxi = max(maxi, count);
            count = 0;
        } else {
            ++count;
        }
    }

    cout << max(maxi, count) << endl;
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
