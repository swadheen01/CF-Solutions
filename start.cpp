/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jan 29 2025 8:33:07 PM
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
    ll m,k; cin>>m>>k;
    string s; cin>>s;
    ll c=0;
    ll p =0;
    for(auto &e:s){
        if(e=='S') c++;
        else p++;
    }
    if(c>=k){
        cout<<s.length()<<endl;
        return;
    }
    cout<<c+(k-c-1)+p<<endl;
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
