/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Aug 29 2024 11:03:19 PM
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
    if(n%2){
        for(int i=0; i<n; i++)
        {
            cout<<1<<" ";
        }cout<<endl;
    }
    else{
        cout<<1<<" "<<3<<" ";
        for(int i=2; i<n;i++)
        {
            cout<<2<<" ";
        }
        cout<<endl;
    }
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
