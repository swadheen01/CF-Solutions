/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Aug 26 2024 9:53:13 PM
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
    int n,m; cin>>n;
    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m; int b[m];
    for(int i=0; i<m;i++)
    {
        cin>>b[i];
    }
    sort(a, a+n);
    sort(b, b+m);
    cout<<a[n-1]<<" "<<b[m-1]<<endl;
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
