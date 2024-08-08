// map vs unordered_map problem

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

    ll maxi = LLONG_MIN;
    map<ll, ll> hm;
    // unordered_map<ll, ll> hm;
    // hm.reserve(1024);
    // hm.max_load_factor(0.25);

    vector<ll> arr(n);
    for (ll &val : arr) {
        cin >> val;

        maxi = max(maxi, ++hm[val]);
    }

    ll same_ele = maxi;
    ll swap_count = 0, clone_count = 0;  // no. of operation done
    while (same_ele < n) {
        ++clone_count;                              // (operations no. 1) to make copy of array
        swap_count += min(same_ele, n - same_ele);  // (operations no. 2) copy element to the array

        same_ele *= 2;  // after making new copy
    }

    cout << (swap_count + clone_count) << endl;
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
