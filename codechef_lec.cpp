/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Dec 04 2024 10:06:57 PM
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
    ll n,m; cin>>n>>m;
    string s,t; cin>>s>>t;
    if(s[0] != t[0]){
        no; return;
    }
    ll j = 0;
    for(ll i=0; i<n-2; i++)
    {
        if(s[i]==t[j]) j++;
         else if(s[i]!=t[j])
        {
            if(s[i-1]==t[j] || s[i+1]==t[j] || s[i+2]!=t[j])
            {
                //cout<<"hg\n";
                no; return;
            }
            else{
            i++; j++;
            }
        }
        
    }
    yes;
}

int main() {
    ALLAHU_AKBAR

    ll tt = 1;
    cin>>tt;
    while(tt--)
    {
        sir();
    }
    return 0;
}
