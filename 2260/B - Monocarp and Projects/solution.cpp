#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long x, y, k;
    cin >> x >> y >> k;
    long long D = y - x;
    long long limit = min(k - 1, D - x);
    long long iters = max(0LL, limit + 1);
    long long ans = 0;
    for (long long i = 0; i < iters; i++) {
        ans += D % (x + i);
    }
    long long rem = k - iters;
    ans += rem * D;
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}