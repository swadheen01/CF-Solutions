/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Dec 12 2024 12:03:20 AM
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
    vector<ll>div;
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0 && (n/i != i)) div.push_back(i), div.push_back(n/i);
        else if(n%i==0 && (n/i == i)) div.push_back(i);
    }
    sort(div.begin(), div.end());
    for(auto &a:div) cout<<a<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
