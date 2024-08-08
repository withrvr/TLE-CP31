#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1000000007
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for (ll &val : arr)
        cin >> val;

    sort(arr.begin(), arr.end());

    ll count = 1, maxi = 1;
    for (ll i = 1; i < n; ++i) {
        if (arr[i] - arr[i - 1] > k)
            count = 1;
        else
            maxi = max(maxi, ++count);
    }

    cout << n - maxi << endl;
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
