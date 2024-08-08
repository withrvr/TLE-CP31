#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1000000007
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    string str, tar, ref = "EDIND";
    cin >> str >> tar;

    if (str.size() < tar.size()) {
        no();
        return;
    } else if (str.size() == tar.size() && str == tar) {
        yes();
        return;
    }

    // NOTE: will be changed .... can create copy of it before
    // ----- main logic -----
    ll last = str.size();
    for (ll i = tar.size() - 1; i >= 0; --i) {
        char ch = tar[i];
        size_t idx = str.find_last_of(ch);

        // cout << idx << ":" << str << endl;

        if (idx == string::npos || idx >= last) {
            no();
            return;
        }

        last = idx;
        str[idx] = '-';
    }

    yes();

    // cout << endl << endl;
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
