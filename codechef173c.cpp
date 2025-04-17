/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Feb 12 2025 8:29:46 PM
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

void sir2()
{
    ll x,y; cin>>x>>y;
    cout<<(x+10*y)<<endl;
    
}
void sir()
{
    ll n; cin>>n;
    vector<ll>a(n);
    map<ll,ll>mp;
    for(auto &e:a)
    {
        cin>>e;
        mp[e]++;
    }
    for(auto &p:mp)
    {
        if(p.second>=2)
        {
            cout<<1<<endl;
            cout<<p.first<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
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
