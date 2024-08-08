#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1000000007
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll n;
    string str;
    cin >> n >> str;

    ll maxi = 1, curr = 1;
    for (ll i = 1; i < n; ++i) {
        if (str[i] == str[i - 1])
            maxi = max(maxi, ++curr);
        else
            curr = 1;
    }

    cout << maxi + 1 << endl;
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
