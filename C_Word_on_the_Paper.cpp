/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Aug 23 2024 11:39:19 PM
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
    char arr[8][8];
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            cin>>arr[i][j];
        }
    }
    string s;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(arr[i][j]>='a' && arr[i][j]<='z'){
                s.pb(arr[i][j]);
                
            }
        }
    }
    cout<<s<<endl;
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
