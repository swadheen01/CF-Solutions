/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Dec 04 2024 8:35:09 PM
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
    vector<ll>a(n),b(n);
    for(auto &x:a) cin>>x;
    for(auto &j:b) cin>>j;
    rsrt(a);
    rsrt(b);
    ll sum = 0;
    ll c = 0;
    for(ll i=0; i<n; i++)
    {
        
        sum += (a[i]*b[i]); c++;
        if(sum>=k){
            cout<<c<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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
