// https://www.spoj.com/problems/AGGRCOW/

#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

bool place_cow(vector<ll> &arr, ll cows, ll check_diff) {  // return type ll
    ll n = arr.size();

    ll count_cows = 1;
    // ll mini = LLONG_MAX;

    ll last = 0;
    for (ll i = 1; i < n; ++i) {
        ll diff = arr[i] - arr[last];
        if (diff >= check_diff) {
            // mini = min(mini, diff);
            last = i;

            if (++count_cows == cows)  // >= ... more safe
                break;
        }
    }

    return count_cows == cows;
    // !(count_cows < cows) ... can do like this also
    // return count_cows < cows ? -1 : mini;
}

void solve() {
    ll n, c;
    cin >> n >> c;

    vector<ll> arr(n);
    for (ll &val : arr) {
        cin >> val;
    }

    sort(arr.begin(), arr.end());

    // ll r = arr[n - 1] - arr[0];
    // for (ll i = 1; i <= r; ++i) {
    //     cout << place_cow(arr, c, i) << endl;
    // }

    ll l = 1, r = arr[n - 1] - arr[0];

    while (l <= r) {
        ll m = l + (r - l) / 2;

        if (place_cow(arr, c, m)) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    cout << r << endl;
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
