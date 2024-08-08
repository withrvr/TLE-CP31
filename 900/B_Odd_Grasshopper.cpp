#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1000000007
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll x, n;
    cin >> x >> n;

    //  imagine doing process from 0
    vector<ll> hm = {0, -n, 1, n + 1};  // mod4 ... 0 1 2 3
    ll diff = hm[n % 4];                // what will the diff from 0

    // for any number now : calculate using that difference
    if (x % 2 == 0)
        cout << x + diff << endl;  // if even everything will work same like 0
    else
        cout << x - diff << endl;  // else will go to other direction
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
