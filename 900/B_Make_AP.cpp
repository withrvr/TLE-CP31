#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1000000007
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

// && new_a != 0 .... no need to do ... given a > 0
// and new_a >= a will also check it
void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    // ll new_a = b - (c - b);
    ll new_a = b + (b - c);
    if (new_a >= a && new_a % a == 0) {  // && new_a != 0
        yes();
        return;
    }

    // ll new_b = a + (c - a) / 2;
    ll new_b = (a + c) / 2;
    if (new_b >= b && new_b % b == 0 && (c - a) % 2 == 0) {  // && new_b != 0
        yes();
        return;
    }

    // ll new_c = a + 2 * (b - a);
    ll new_c = b + (b - a);
    if (new_c >= c && new_c % c == 0) {  // && new_c != 0
        yes();
        return;
    }

    // solution not possible
    no();
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
