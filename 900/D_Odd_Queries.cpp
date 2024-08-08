#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1000000007
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll n, q;
    cin >> n >> q;

    vector<ll> pre;
    pre.push_back(0);

    ll val;
    for (ll i = 1; i <= n; ++i) {
        cin >> val;
        pre.push_back(val + pre[i - 1]);
    }

    ll sum = pre.back();
    for (ll i = 0; i < q; ++i) {
        ll l, r, k;
        cin >> l >> r >> k;

        // ll len = r - l + 1;
        // ll len_sum = len * k;

        // ll lr_sum = pre[r] - pre[l-1];
        // ll res = sum - lr_sum + len_sum;

        ll res = sum - (pre[r] - pre[l - 1]) + ((r - l + 1) * k);

        if (res % 2 == 1)
            yes();
        else
            no();
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
