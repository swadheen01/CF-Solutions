/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Jan 04 2025 9:13:25 PM
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
    ll n,k; cin>>n>>k;
    vector<ll>v(n);
    map<ll,ll>mp;
    set<ll>st;
    vector<ll>chk;
    for(auto &a:v){
        cin>>a;
        mp[a]++;
        st.insert(a);
    }
    ll ans = st.size();
    // cout<<ans<<" "<<chk.size()<<endl;
    for(auto &p:mp){
        chk.pb(p.second);
    }
    srt(chk);
    for(auto &e:chk){
        if(e<=k){
            ans--;
            k-=(e);
        }
    }
    if(ans==0) cout<<1<<endl;
    else
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
