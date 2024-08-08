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
    for (ll &val : arr)
        cin >> val;

    ll last = n - 1;
    ll maxi = LLONG_MIN;
    maxi = max(maxi, arr[last] - arr[0]);

    for (int i = 0; i < n; ++i) {
        if (i < last) {
            maxi = max(maxi, arr[last] - arr[i]);  // last ele const : other moving
        }

        if (i > 0) {
            maxi = max(maxi, arr[i] - arr[0]);      // first ele const : other moving
            maxi = max(maxi, arr[i - 1] - arr[i]);  // whole arr : is rotating ... // then eventually : alternate ele will be last and first
        }
    }

    cout << maxi << endl;
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

// IMP / NOTE
// you can rotate elements any amount of time from l to r
// but can perform this only one time
