#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    ll n;
    cin >> n;

    // input / count -ve ones
    ll cnt_neg = 0, val;
    for (ll i = 0; i < n; ++i) {
        cin >> val;
        if (val == -1) ++cnt_neg;
    }

    // logic
    // k or half_needed: no of -1 should be in arr to match the rules
    // ie: <= half
    ll half_needed = n / 2;
    if (half_needed % 2 == 1)
        --half_needed;
    ll res = max(cnt_neg - half_needed, cnt_neg % 2);
    // first: if cnt_neg > k ..... find extra and thats the ans
    // second: but if  cnt_neg <= k ... only 1 need to change if odd no of -1

    // printing
    cout << res << endl;
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
