#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll n, x;
    cin >> n >> x;

    ll val, sum = 0, calc = 0;
    for (ll i = 0; i < n; ++i) {
        cin >> val;
        sum += val;

        calc += ceil(val / (double)x);
    }

    // ERROR: will print in ``e`` format for big number
    // eg. 3.33333e+09 ... 1e+10
    // conversion is important
    // cout << ceil(sum / (double)x) << " " << calc << endl;

    cout << (ll)ceil(sum / (double)x) << " " << calc << endl;
}

// void solve() {
//     ll n, x;
//     cin >> n >> x;

//     ll val, sum = 0, calc = 0;
//     for (ll i = 0; i < n; ++i) {
//         cin >> val;
//         sum += val;

//         calc += val / x;
//         if (val % x != 0) ++calc;
//     }

//     ll mini = sum / x;
//     if (sum % x != 0)
//         ++mini;

//     cout << mini << " " << calc << endl;
// }

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
