#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1000000007
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

ll helper(string &str, string &target) {
    ll j = str.length() - 1;  // pointing from right
    ll count = 0;

    // for 2nd target
    while (j >= 0 && str[j] != target[1]) {
        ++count;
        --j;
    }

    // if ch not found
    if (j < 0)
        return LLONG_MAX;

    // for 1st target
    --j;
    while (j >= 0 && str[j] != target[0]) {
        ++count;
        --j;
    }

    // if ch not found
    if (j < 0)
        return LLONG_MAX;

    return count;
}

void solve() {
    string str;
    cin >> str;

    vector<string> ends = {"00", "25", "50", "75"};

    ll res = LLONG_MAX;

    for (string &target : ends)
        res = min(res, helper(str, target));

    // NOTE: but in question given : solution will always be there
    if (res == LLONG_MAX)  // not found
        cout << -1 << endl;

    cout << res << endl;
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
