//ref: https://codeforces.com/contest/1614/submission/138443911

#include <bits/stdc++.h>
typedef long long ll;
#define endl '\n'
 
using namespace std;
 
bool myPairSort(const pair <ll, ll> &a, const pair <ll, ll> &b) {
    return a.first > b.first;
}
 
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, i;
        cin >> n;
        ll a[n];
        std::vector< pair <ll,ll> > v;
        for (i = 0; i < n; ++i) {
            cin >> a[i];
            v.push_back({a[i], i+1});
        }
        sort(v.begin(), v.end(), myPairSort);
        for(i = 0; i < v.size(); ++i) {
            cout << v[i].first << " " << v[i].second << endl;
        }
        cout << endl << endl;
    }
}
