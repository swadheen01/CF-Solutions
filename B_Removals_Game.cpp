/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Dec 11 2024 11:37:56 PM
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
    vector<ll>a(n),b(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)cin>>b[i];
    ll cf = 0, cb = 0;
    for(ll i=0;i<n; i++)
    {
        if(a[i]==b[i])cf++;
        if(a[i]==b[n-i-1])cb++;
    }
    if(cf==n || cb==n){
        cout<<"Bob\n";
    }
    else cout<<"Alice\n";
    

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
