#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1000000007
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (ll &val : arr) {
        cin >> val;
        // if (val == 1)
        ++val;
    }

    for (ll i = 1; i < n; ++i)
        if (!(arr[i] % arr[i - 1]))
            ++arr[i];

    for (ll &val : arr)
        cout << val << " ";

    cout << endl;
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
