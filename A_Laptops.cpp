/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Jul 16 2024 11:21:07 PM
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
    
}

int main() {
    ALLAHU_AKBAR

    int n,c=0;
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
 
        if(a<b)
            c++;
 
    }
    (c != 0) ? cout<<"Happy Alex"<<endl : cout<<"Poor Alex"<<endl;

    return 0;
}
