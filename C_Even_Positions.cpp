/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Dec 12 2024 11:27:23 PM
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
    string s; cin>>s;
    stack<ll>st;
    st.push(0);
    ll cost = 0;
    for(ll i=1; i<n; i++)
    {
        if(i%2==1 && s[i]==')') //odd emnite
        {
            cost += (i-st.top());
            st.pop();
        }
        else if(i%2==1 && s[i]=='(') st.push(i);
        else if(i%2==0)
        {
            if(st.empty()) st.push(i);
            else{
                cost += (i-st.top());
                st.pop();
            }
        }
    }
    cout<<cost<<endl;
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
