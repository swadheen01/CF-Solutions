/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Feb 02 2025 8:42:35 PM
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
    ll n; cin>>n;
    set<ll>s1,s2;
    for(ll i=0; i<n; i++){
        ll x; cin>>x;
        s1.insert(x);
    }
    for(ll i=0; i<n; i++){
        ll x; cin>>x;
        s2.insert(x);
    }
    if(s1.size()>=3 || s2.size()>=3)
    {
        yes;
        return;
    }
    else if(s1.size()>=2 && s2.size()>=2)
    {
        yes; return;
    }
    no; return;
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
