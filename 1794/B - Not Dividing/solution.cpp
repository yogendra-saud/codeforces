// Author: yoegndra saud
// Scholar Id: 25CS10030
// 1. ॥ श्री गणेशाय नमः ॥ (Lord Ganesh)
// 2. ॥ ॐ नमः शिवाय ॥ (Lord Shiva)
// 3. ॥ ॐ नमो भगवते वासुदेवाय ॥ (Lord Krishna/Vishnu)
// 4. ॥ जय श्री राम ॥ (Lord Rama)
// 5. ॥ जय बजरंगबली ॥ (Lord Hanuman)
// 6. ॥ कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ॥ (Bhagavad Gita - Focus on your duty, not the result)
// 7. ॥ असतो मा सद्गमय, तमसो मा ज्योतिर्गमय ॥ (Lead me from ignorance to truth, from darkness to light)
// 8. ॥ विद्या ददाति विनयं ॥ (Knowledge gives humility)
// 9. ॥ वसुधैव कुटुम्बकम् ॥ (The world is one family)
// 10. ॥ ॐ शान्तिः शान्तिः शान्तिः ॥ (Peace mantra)
// 11. ॥ हे भगवन्, इदं सङ्केतं निर्विघ्नं सफलम् भवतु ॥ (Bhagwan, yo code run bhaihalos!)
 
// =========================================================================================
// ================================Code starts from here=====================================
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ld = long double;
 
#define endl '
'
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const int MOD = 1e9+7;
const ll INF = LLONG_MAX >> 1;
 
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
          v[i]++;
        
    }
   for(int i=0;i<n-1;i++)
   {
    if(v[i+1]%v[i]==0) v[i+1]++;
   }
   for(int i=0;i<n;i++)
   {
    cout<<v[i]<<" ";
   }
   cout<<endl;
}
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t ;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}