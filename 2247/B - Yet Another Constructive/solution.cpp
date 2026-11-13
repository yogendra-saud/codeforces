/**
 * ॐ असतो मा सद्गमय ।
 * तमसो मा ज्योतिर्गमय ।
 * मृत्योर्मा अमृतं गमय ।
 * ॐ शान्तिः शान्तिः शान्तिः ॥
 */
 
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
void solve() {
    long long n, k, m;
    cin >> n >> k >> m;
 
    if (k > m) {
        cout << "NO
";
        return;
    }
 
    cout << "YES
";
    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            cout << m - k + 1 << (i == n ? "" : " ");
        } else {
            cout << 1 << (i == n ? "" : " ");
        }
    }
    cout << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}