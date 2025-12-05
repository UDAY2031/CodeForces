#include <bits/stdc++.h>
using namespace std;
 
int main() { 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long mn = LLONG_MAX, mx = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);
        }
        long long x;
        cin >> x;
        cout << ((x >= mn && x <= mx) ? "YES\n" : "NO\n");
    }
    return 0;
}
