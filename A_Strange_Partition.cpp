/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Sep 01 2024 1:42:16 AM
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
    ll n,x; cin>>n>>x;
    ll arr[n];
    ll summ = 0;
    ll sum2 = 0;
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
        summ += arr[i];
        sum2 += (arr[i] + x - 1) / x;
        //cout<<ceil(static_cast<double>(arr[i]) / x)<<endl;
    }
    cout<<(summ+x-1)/x<<" "<<sum2<<endl;
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
