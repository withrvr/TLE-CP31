#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1000000007
using namespace std;

void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

void solve() {
    string str;
    cin >> str;
    ll n = str.size();

    // logic if ch first==last ch ... count ab n ba will be same eventually
    // cout << str.back() + str.substr(1) << endl;
    // or
    cout << str.substr(0, n - 1) + str[0] << endl;

    // unordered_map<string, int> hm;
    // for (ll i = 1; i < n; ++i) {
    //     string temp = str.substr(i - 1, 2);
    //     // cout << temp << ", ";
    //     ++hm[temp];
    // }

    // cout << hm["ab"] << " : " << hm["ba"] << " : ";

    // for (auto p : hm) {
    //     cout << p.first << " " << p.second << endl;
    // }
    // cout << endl;

    // if (hm["ab"] == hm["ba"]) {
    //     cout << str << endl;
    //     return;
    // }

    // but should be minimum ... it will not minimize
    // cout << string(n, 'c') << endl;  // can use also : 'b'
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
