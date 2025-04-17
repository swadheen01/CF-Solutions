/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Aug 22 2024 1:40:48 AM
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
    int a,b; cin>>a>>b;
    int ans=0;
    while(a != b)
    {
        if(a>b){
            int d = (a+1)/2;
            ans += d;
            a -= d;
        }
        else{
            int d = (b+1)/2;
            ans += d;
            b -= d;
        }
    }
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
