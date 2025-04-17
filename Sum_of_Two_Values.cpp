/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Dec 09 2024 12:36:26 AM
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
    ll n,k; cin>>n>>k;
    vector<pair<ll,ll>>v(n+1);
    for(ll i=1; i<=n; i++)
    {
        cin>>v[i].first;
        v[i].second = i;
    }
    srt(v);
    ll p = 1, q = n;
    while(p<q)
    {
        if(v[p].first+v[q].first==k){
            cout<<v[p].second<<" "<<v[q].second<<endl;
            return;
        }
        else if(v[p].first+v[q].first>k){
            q--;
        }
        else p++;
    }
    cout<<"IMPOSSIBLE\n";
    
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
