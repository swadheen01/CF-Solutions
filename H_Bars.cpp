/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Feb 09 2025 12:32:44 AM
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
    ll n; cin>>n;
    ll k; cin>>k;
    vector<ll>v(k);
    for(auto &e:v) cin>>e;
    for(ll i=0; i<=(1<<k)-1; i++)
    {
        ll sum = 0;
        for(ll j = 0; j<k; j++)
        {
            if(i&(1<<j)) sum += v[j];
        }
        if(sum==n)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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
