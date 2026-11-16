// ॥ श्री गणेशाय नमः ॥
// ॥ ॐ नमः शिवाय ॥
// ॥ ॐ नमो भगवते वासुदेवाय ॥
// ॥ जय श्री राम ॥
// ॥ जय बजरंगबली ॥
// ॥ कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ॥
// ॥ असतो मा सद्गमय, तमसो मा ज्योतिर्गमय ॥
// ॥ विद्या ददाति विनयं ॥
// ॥ वसुधैव कुटुम्बकम् ॥
// ॥ ॐ शान्तिः शान्तिः शान्तिः ॥
// ॥ हे भगवन्, इदं सङ्केतं निर्विघ्नं सफलम् भवतु ॥
 
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
void solve() {
    long long a, b;
    cin >> a >> b;
    
    if (a <= b) {
        cout << -1 << "
";
    } else {
        cout << min(a - b, b) << "
";
    }
}
 
int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}