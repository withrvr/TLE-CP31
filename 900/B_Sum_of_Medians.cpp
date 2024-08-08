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

    ll len = n * k;
    vector<ll> arr(len);
    for (ll &val : arr) {
        cin >> val;
    }

    ll diff = (n / 2) + 1;
    ll end = len;
    ll res = 0;

    for (ll i = 0; i < k; ++i) {
        end -= diff;
        res += arr[end];
        // cout << arr[end] << " ";
    }

    // cout << endl;
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
