#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll n;
    cin >> n;

    vector<ll> arr(n);
    ll mini = LONG_MAX;
    for (ll &val : arr) {
        cin >> val;
        mini = min(mini, val);
    }

    vector<ll> b, c;
    for (ll ele : arr) {
        if (ele == mini)
            b.push_back(ele);
        else
            c.push_back(ele);
    }

    // printing
    if (c.size() == 0) {
        cout << -1 << endl;
        return;
    } else {
        cout << b.size() << " " << c.size() << endl;
        for (ll ele : b) {
            cout << ele << ' ';
        }
        cout << endl;
        for (ll ele : c) {
            cout << ele << ' ';
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; ++i) {
        solve();
    }

    return 0;
}
