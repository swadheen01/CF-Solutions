/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Oct 04 2024 8:33:01 PM
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
    char ab, ac, bc;
    cin >> ab >> ac >> bc;

    //char mid = 'A';

    if (ab == '<' && ac == '<' && bc == '<') {
        cout << 'B' << '\n';
    } 
    else if (ab == '>' && ac == '>' && bc == '>') {
        cout << 'B' << '\n';
    } 
    else if (ab == '<' && ac == '<' && bc == '>') {
        cout << 'C' << '\n';
    } 
    else if (ab == '>' && ac == '>' && bc == '<') {
        cout << 'C' << '\n';
    } 
    else if (ab == '<' && ac == '>' && bc == '>') {
        cout << 'A' << '\n';
    } 
    else if (ab == '>' && ac == '<' && bc == '<') {
        cout << 'A' << '\n';
    }
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
