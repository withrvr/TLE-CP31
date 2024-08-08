#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void yes() { cout << "DA" << endl; }
void no() { cout << "NET" << endl; }

void solve() {
    string str;
    cin >> str;

    ll cnt_zero = 0, cnt_one = 0;
    for (auto &val : str) {
        if (val == '1')
            ++cnt_one;
        else
            ++cnt_zero;
    }

    ll mini = min(cnt_one, cnt_zero);
    if (mini % 2 == 0)
        no();
    else
        yes();
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
