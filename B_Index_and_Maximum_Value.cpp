/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Aug 30 2024 9:18:37 PM
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
    ll n,m; cin>>n>>m;
    ll arr[n]; 
    ll mx = -1;
    ll p;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>=mx){
        mx = max(mx,arr[i]);
        p = i;}
    }
    while(m--){
        char c; cin>>c;
        ll l,r; cin>>l>>r;
        if(mx>=l && mx<=r)
        {
            if(c=='+') mx++;
            else mx--;

        }
        cout<<mx<<" ";
    }
    cout<<endl;

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
