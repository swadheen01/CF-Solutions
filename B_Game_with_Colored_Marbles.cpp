/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Dec 02 2024 9:33:23 PM
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
    // ll y
    vector<ll>res;
    ll n;
    cin >> n;
    vector<ll> a(n);
    unordered_map<ll, ll> freq;

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    ll one = 0;
    for (const auto& p : freq) {
        if (p.second == 1) {
            one++;
        }
    }

    ll ans = ((one + 1) / 2) * 2 + (freq.size() - one);
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
