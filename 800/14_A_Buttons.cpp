#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    a += c % 2;
    if (a > b)
        cout << "First" << endl;
    else
        cout << "Second" << endl;

    // // my first logic
    // ll half = c / 2;

    // a += (c - half);
    // b += half;

    // if (a > b)
    //     cout << "First" << endl;
    // else
    //     cout << "Second" << endl;

    // // internet/common logic
    // if (c % 2 == 0) {
    //     if (a > b)
    //         cout << "First" << endl;
    //     else
    //         cout << "Second" << endl;
    // } else {
    //     if (b > a)
    //         cout << "Second" << endl;
    //     else
    //         cout << "First" << endl;
    // }
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
