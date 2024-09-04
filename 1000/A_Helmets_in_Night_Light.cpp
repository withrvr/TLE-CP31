#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll n, p;
    cin >> n >> p;

    // count can announce
    vector<ll> a(n);
    for (ll &val : a) {
        cin >> val;
    }

    // cost to tell
    vector<ll> b(n);
    for (ll &val : b) {
        cin >> val;
    }

    // --------- intput done ---------

    // adding <cost, count> ... special array
    vector<pair<ll, ll>> arr;
    for (int i = 0; i < n; ++i) {
        arr.push_back({b[i], a[i]});
    }
    arr.push_back({p, n + 1});  // special for chief and its cost

    sort(arr.begin(), arr.end());  // to get the min cost

    // inital variable value ... as chief have to tell at least one
    ll res_cost = p;
    ll told_to = 1;

    // main logic
    for (auto &[cost, count] : arr) {
        if (count + told_to < n) {
            res_cost += cost * count;
            told_to += count;
        } else {
            res_cost += cost * (n - told_to);
            break;
        }
    }

    cout << res_cost << endl;
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