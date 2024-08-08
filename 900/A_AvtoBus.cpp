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

    if (n % 2 == 1 || n < 4) {
        cout << -1 << endl;
    } else {
        ll mini = n / 6;
        ll maxi = n / 4;

        // for mini
        if (n % 6 != 0)  // ie. 2 or 4
            ++mini;

        // if (mini <= 0)
        //     mini = 1;

        cout << mini << " " << maxi << endl;
    }
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
