/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Feb 11 2025 8:40:36 PM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define pb push_back
#define endl "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

void sir()
{
    
    ll x,y; cin>>x>>y;
    
    if(x%9==0 && y==1ll)
    {
        yes; return;
    }
    
    if(y-x==1){
        yes; return;
    }
    if(x<=y)
    {
        no; return;
    }
    if((x-y+1)%9==0)
    {
        yes;return;
    }
    no;
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
