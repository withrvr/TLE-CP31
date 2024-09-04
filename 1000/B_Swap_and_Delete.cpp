#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    string str;
    cin >> str;

    vector<int> cnt(2, 0);
    for (char c : str)
        ++cnt[c - '0'];

    for (char ch : str) {
        int req_num = ch == '0' ? 1 : 0;
        // int req_num = 1 - (ch - '0');

        if (cnt[req_num] == 0) {
            cout << cnt[1 - req_num] << endl;
            // LOGIC: remaining string size ..... str.size() - curr_idx
            return;
        }
        --cnt[req_num];
    }

    cout << 0 << endl;
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
