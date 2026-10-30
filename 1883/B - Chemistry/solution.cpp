#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    int even=0;
    int odd=0;
    int o=0;
    for(auto &p:mp)
    {
        even+=p.second/2;
        odd+=p.second%2;
        if(p.second%2!=0)
        {
            o++;
        }
    }
    int x=n-k;
    int kx=k-odd;
    int pair_even=x/2;
    int pair_odd=x%2;
    int rem=even-pair_even;
    rem=rem*2-kx;
    if(o<=k+1)
    {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}