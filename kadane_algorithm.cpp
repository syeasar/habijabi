#include <bits/stdc++.h>
typedef long long ll;
#define endl '\n'

using namespace std;

int main() {
    ll n;
    cin >> n;
    vector <ll> v(n);
    for (auto &x: v) {
        cin >> x;
    }
    ll best = LLONG_MIN, sum = 0;
    for (ll i = 0; i < n; ++i) {
        sum = max (v[i], sum + v[i]);
        best = max (sum, best);
        cout << "i= " << i << " sum= " << sum << " best= " << best << endl;
    }
    cout << best << endl;
}

/*
8
-1 2 4 -3 5 2 -5 2
*/
