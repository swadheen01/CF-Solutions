/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Sep 11 2024 8:28:39 PM
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
    int a1,a2,b1,b2,c1,c2; cin>>a1>>a2>>b1>>b2>>c1>>c2;
    int summ = max(a1,a2) + max(b1,b2) + max( c1,c2);
    cout<<summ<<endl;
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
