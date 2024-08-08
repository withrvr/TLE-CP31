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
    ll l = -1, r = -1;  // find left/right most non-zero number
    for (ll i = 0; i < n; ++i) {
        cin >> arr[i];

        if (arr[i]) {
            r = i;
            if (l == -1) l = i;
        }
    }

    if (l == -1) {  // all ele are zeros
        cout << 0 << endl;
    } else {
        for (ll i = l; i <= r; ++i) {
            if (arr[i] == 0) {
                // zero in between also
                // then first convert them to number
                // then all number to zero (2 step)
                cout << 2 << endl;
                return;
            }
        }

        // zero at starting or/and ending only
        // so remaining can be turn to zero in one step only
        cout << 1 << endl;
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
