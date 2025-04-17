/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Nov 05 2024 9:14:06 PM
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

void sir2()
{
    // int y
    ll n,k; cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0; i<n; i++)cin>>a[i];

    ll sc =0;
    ll cnt=1;
    ll st, en;
    //bool ok = false;
    ll chk =0;
    for(ll i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1]){
            sc++;
            ll key = a[i];
            if(i !=0) chk = a[i-1];
            
            st = i;
            i++;
            
            while(1)
            {
                if(key>a[i]){
                    cnt++;
                en = i;
                //if(a[i]<chk) ok = true;
                i++;
                }
                else {
                    i--;
                    break;
                }
                
            }

        }
    }
    if(sc>1 || cnt>k || cnt==1) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<st+1<<" "<<en+1<<endl;
        //cout<<sc<<" "<<cnt;
    }
    
}
void sir()
{
    ll n, k; cin>>n>>k;
    vector<ll>a(n), b(n);
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    srt(b);
    ll st=0,end=0;
    for(ll i=0; i<n; i++)
    {
        if(a[i] != b[i]) 
        {st = i+1;
         break;}
    }
    for(ll i=n-1; i>=0; i--)
    {
        if(a[i] != b[i]) {end = i+1; break;}
    }
    
    if(st){
        if(end-st+1<=k){
        cout<<"YES"<<endl;
        cout<<st<<" "<<end<<endl;
        return;
        }
    }
    cout<<"NO"<<endl;
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
