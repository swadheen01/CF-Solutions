/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Nov 27 2024 8:27:47 PM
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
    ll n; cin>>n;
    vector<ll>a(n);
    ll sum = 0;
    for(auto &e:a) {cin>>e; sum+=e;}
    ll tot = (n+1)*100;
    if(sum>=(tot/2)) cout<<0<<endl;
    else{
        ll need = (tot/2) - sum;
        if(need>100) cout<<-1<<endl;
        else cout<<need<<endl;
    }

}
void sirB()
{
    ll n; cin>>n;
    vector<ll>a(n), b(n-1);
    for(auto &e:b) cin>>e;
    srt(b);
    a[0] = 1;
    for(ll i=1; i<n; i++)
    {
        a[i] = b[i-1]-a[i-1];
    }
    for(auto &e:a){
        cout<<e<<" ";
    } cout<<endl;
}
void sirC()
{
    ll n,k; cin>>n>>k;
    vector<ll>a(n);
    if(k==1){
        cout<<-1<<endl;
        return;
    }
    
    if(n==k)
    {
        ll ind=0;
        for(ll i=2; i<=n; i++)
        {

            a[ind++] = i;
        }//cout<<1<<endl;
        a[n-1] = 1;
    }
    else{
        ll ind = 0;
        for(ll i=k; i<=n; i++)
        {
            a[ind++] = i;
        }
        for(ll i=1; i<k; i++)
        {
            a[ind++]=i;
        }//cout<<endl;
    }
    for(ll i=0; i<n-1; i++)
    {
        if(a[i]%k == (i+1)%k){
            swap(a[i],a[i+1]);
        }
    }
    for(ll i=n-1; i>=1; i--)
    {
        if(a[i]%k == (i+1)%k){
            swap(a[i],a[i-1]);
        }
    }
    for(auto &e:a){
        cout<<e<<" ";
    }
    cout<<endl;


}
void sirC2(){
    ll n,k; cin>>n>>k;
    vector<ll>a(n);
    if(k==1){
        cout<<-1<<endl;
        return;
    }
    for(ll i=0; i<n; i++)
    {
        a[i] = (i+k)%n + 1;
    }
    if(a.size()==1 && a[0]==-1)
    {
        cout<<-1<<endl;
        return;
    }
    for(auto &e:a){
        cout<<e<<" ";
    }cout<<endl;
}
int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sirC2();
    }
    return 0;
}
