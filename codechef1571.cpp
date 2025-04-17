/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Oct 23 2024 8:32:29 PM
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

// void sir()
// {
//     // int y
//     ll n,m; cin>>n>>m;
//     string s,f; cin>>s>>f;
//     set<char>st;
//     for(ll i=0; i<n; i++)st.insert(s[i]);
//     for(ll i=0; i<m; i++) st.insert(f[i]);
//     for(char c = 'a'; c<='z'; c++)
//     {
//         if(st.find(c)==st.end())
//         {
//             cout<<"Yes"<<endl;
//             return;
//         }
//     }
//     cout<<"No"<<endl;
// }
// void sirB()
// {
//     int n; cin>>n;
//     vector<int>a(n+1);
//     vector<int>b;
//     int sum = 0;
//     for(int i=0; i<=n; i++)
//     {
//         cin>>a[i];
//         sum += a[i];
//         if(i==n)
//         {continue;}
//         b.pb(a[i]);
//     }
    
    
//     srt(b);
//     int i=0;
//     int mx = a[n];
//     while(i<n){
//         if(b[i]<=2*mx && b[i]>mx)
//         {
//             mx = b[i];
//             i++;
//         }
//         else i++;
//     }
//     sum -= mx;
//     cout<<sum<<endl;
// }
// void sirC()
// {
//     int n ; cin>>n;
//     string s; cin>>s;
//     int z = 0, o = 0;
//     for(int i=0; i<n ; i++)
//     {
//         if(s[i]=='0') z++;
//         else o++;
//     }
//     int ans = 0;
//     if(o==0) ans = z;
//     else if(o%2==1) ans = 1;
//     cout<<ans<<endl;
// }
void sirD()
{
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }

    ll ans = 0;
    ll l = 1;
    for(int i=1;i<=n; i++)
    {
        if(i<n && v[i]==v[i-1]) l++;
        else{
            ans += (l)*(l+1)/2;
            l = 1;
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
        sirD();
    }
    return 0;
}
