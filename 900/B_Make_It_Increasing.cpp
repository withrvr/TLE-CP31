#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1000000007
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (ll &val : arr) {
        cin >> val;
    }

    ll count = 0;
    for (ll i = n - 2; i >= 0; --i) {
        while (arr[i] >= arr[i + 1] && arr[i]) {  // arr[i] > 0 ... same ... /IMP
            arr[i] /= 2;
            ++count;
        }

        if (arr[i] == arr[i + 1]) {  // arr[i] == 0 && arr[i + 1] == 0 ... same
            cout << -1 << endl;
            return;
        }
    }

    cout << count << endl;
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
