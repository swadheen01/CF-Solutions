/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Aug 28 2024 9:17:36 PM
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
    ll arr[n];
    ll c = 0;
    ll mx = 1e9;
    ll mxp = arr[0];
    ll nz = 0;
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<0){
            c++;
        }
        else if(arr[i]==0) nz++;
        mx = min(mx,abs(arr[i]));
    }
    ll sum =0;
    for(int i=0; i<n; i++)
        {
    
            sum += abs(arr[i]);
        }
        
    if(c%2==0 || nz>0){
        cout<<sum<<endl;
    }
    else{
        cout<<sum-mx-mx<<endl;

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
