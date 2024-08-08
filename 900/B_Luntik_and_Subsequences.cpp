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

    ll cnt_one = 0, cnt_zero = 0;

    ll val;
    for (ll i = 0; i < n; ++i) {
        cin >> val;

        if (val == 1) ++cnt_one;
        if (val == 0) ++cnt_zero;
    }

    // cout << cnt_one << " : " << cnt_zero << " : ";
    cout << (ll)pow(2, cnt_zero) * cnt_one << endl;
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
