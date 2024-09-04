#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll n, k;
    cin >> n >> k;

    ll mini = LLONG_MAX, cnt_even = 0;

    vector<ll> arr(n);
    for (ll &val : arr) {
        cin >> val;
        if (val % 2 == 0)
            ++cnt_even;

        if (val % k == 0)
            mini = 0;
        else
            mini = min(mini, k - val % k);
    }

    if (k == 4) {
        if (cnt_even >= 2) {
            cout << 0 << endl;
        } else if (cnt_even == 1) {
            // cout << 1 << endl;
            cout << min((ll)1, mini) << endl;
        } else if (cnt_even == 0) {
            cout << min((ll)2, mini) << endl;
            // cout << 2 << endl;
        }
    } else {
        cout << mini << endl;
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
