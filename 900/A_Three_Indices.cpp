#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (ll &val : arr) {
        cin >> val;
    }

    for (ll i = 1; i < n - 1; ++i) {
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
            yes();
            cout << i << " " << i + 1 << " " << i + 2 << endl;
            return;
        }
    }

    no();
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
