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

    // if (n == 1) {  // base condition if want to add
    //     cout << 0 << endl;
    //     return;
    // }

    // // if not divisible by three .... then impossible
    // if (n % 3 != 0) {  // base condition if want to add
    //     cout << -1 << endl;
    //     return;
    // }

    ll two_cnt = 0, three_cnt = 0;
    ll tmp = n;
    while (tmp % 2 == 0) {
        ++two_cnt;
        tmp /= 2;
    }

    while (tmp % 3 == 0) {
        ++three_cnt;
        tmp /= 3;
    }

    // to check if other prime numbers in number
    // then not possible
    if (tmp != 1) {
        cout << -1 << endl;
        return;
    }

    // cout << two_cnt << " - " << three_cnt << endl;
    // LOGIC : we can add 2 ..... but cant add more 3
    if (two_cnt > three_cnt) {
        cout << -1 << endl;
        return;
    }

    ll steps = three_cnt + (three_cnt - two_cnt);
    cout << steps << endl;
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
