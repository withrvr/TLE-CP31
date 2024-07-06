#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll i, n, k, x;
    cin >> n >> k >> x;

    if (x > 1) {
        yes();
        cout << n << endl;
        for (i = 0; i < n; ++i)
            cout << 1 << " ";
        cout << endl;
    } else if (k == 1 || (k == 2 && n % 2 == 1)) {
        no();
    } else {
        yes();
        ll times = n / 2;
        cout << times << endl;
        cout << (n % 2 == 0 ? 2 : 3) << " ";
        for (i = 1; i < times; ++i)
            cout << 2 << " ";
        cout << endl;
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
