#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll n;
    cin >> n;

    // except 2 all are odd prime number .... make sense
    // check if n is power of 2
    // except that all will be YES

    // if (n % 2 == 1)  // odd .... self is only divisor
    //     yes();

    if ((n & (n - 1)) == 0)
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
