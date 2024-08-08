#include <bits/stdc++.h>
#define ll long long
// #define ull unsigned long long
#define endl '\n'
#define mod 1000000007
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll n;
    cin >> n;
    // if (n % 2 == 1) {
    //     cout << 1 << endl;
    //     return;
    // }

    ll count = 1;
    while (n % count == 0) ++count;
    cout << count - 1 << endl;
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
