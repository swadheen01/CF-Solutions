/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jan 17 2025 11:48:31 PM
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

    if(k & 1)
    {
        printf("1\n");
    }
    else {
        ll l = 2;
        ll ans = 2;
        while(1) {
            if((k-l) % (l * 2) == 0) break;
            ans++;
            l *= 2;
        }
        printf("%lld\n", ans);
    }
    
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
