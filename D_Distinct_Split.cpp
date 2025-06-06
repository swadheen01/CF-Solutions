/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Sep 25 2024 12:01:42 AM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define endl "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

void sir()
{
    // int y
    int n; cin>>n;
    string s; cin>>s;

    vector<int>samne(n,0), piche(n,0);
    set<char>st;

    int i=0;
    for(auto e:s)
    {
        st.insert(e);
        samne[i++] = st.size();
    }
    st.clear();
    
    for(int i=n-1; i>=0; i--)
    {
        st.insert(s[i]);
        piche[i] = st.size();

    }
    int ans = 0;
    for(int i=0; i<n-1; i++)
    {
        ans = max(ans, samne[i]+piche[i+1]);
    }
    cout<<ans<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
