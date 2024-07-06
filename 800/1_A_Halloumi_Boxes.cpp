#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (ll &val : arr)
        cin >> val;

    if (k > 1 || is_sorted(arr.begin(), arr.end()))
        cout << "YES";
    else
        cout << "NO";

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
