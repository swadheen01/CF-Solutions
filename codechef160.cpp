/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Nov 13 2024 8:41:44 PM
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
    ll t1 = n*10;
    ll t2 = n*12;
    if(k>=t1 && k<=t2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
void sir2()
{
    ll n,m; cin>>n>>m;
    string s,f; cin>>s>>f;
    ll ca=0,cb=0;
    // if(n>m){
    //     string x = 
    // }
    ll ca2=0, cb2=0;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='a') ca++;
        else cb++;
    }
    for(ll i=0; i<m; i++)
    {
        if(f[i]=='a') ca2++;
        else cb2++;
    }
    if(s[0]!=f[0]){
        cout<<"No"<<endl;
        return;

    }
    if(ca != ca2){
        cout<<"No"<<endl;
        return;
    }
    if((ca==0 && ca2 ==0) && (cb!=cb2))
    {
        cout<<"No"<<endl;
        return;
    }
    if (!((ca <= ca2 && n <= m) || (ca2 <= ca && m <= n))) {
        cout << "No" << endl;
        return;
    }
    cout<<"Yes\n";
    


}
string ok(const string &s) {
    string nu;
    for (char c : s) {
        nu.push_back(c);

        if (nu.size() >= 2 && nu[nu.size() - 2] == 'a' && nu[nu.size() - 1] == 'b') {
            nu.pop_back();
        }
    }
    return nu;
}
void sir3()
{
    int N, M;
    cin >> N >> M;
    string S, T;
    cin >> S >> T;

    string nuS = ok(S);
    string nuT = ok(T);

    if (nuS == nuT) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        //sir();
        //sir2();
        sir3();
    }
    return 0;
}
