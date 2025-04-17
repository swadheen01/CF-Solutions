/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Sep 11 2024 8:38:02 PM
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
    int D, X, Y;
        cin >> D >> X >> Y;

        if (Y >= X) {
            cout << 0 << endl;
            return;
        }

        int ses = 0;
        bool pos = false;
        
        while (Y - ses > 0) {
            int p2 = ceil(X * (100 - D * ses) / 100.0);
            if (Y - ses >= p2) {
                pos = true;
                break;
            }
            ses++;
        }

        if (pos) {
            cout << ses << endl;
        } else {
            cout << -1 << endl;
        }
    
}
void sir2()
{
    int D, X, Y; 
        cin >> D >> X >> Y;
        
       
        bool pos = false;
        for (int k = 0; k <= 100 / D; ++k) {
    
            int rem = Y - k;
            if (rem < 0) break;
            
            double p2 = X * (1 - (k * D / 100.0));
            
            if (rem >= ceil(p2)) {
                cout << k << endl;
                pos = true;
                break;
            }
        }
        if (!pos) {
            cout << -1 << endl;
        }
    
}
void sir3()
{
    int D, X, Y;
        cin >> D >> X >> Y;

        if (Y >= X) {
            cout << 0 << endl;
            return;
        }

        int ses = 0;
        bool ok = false;

        while (ses <= 100) {  
            
            int rem = Y - ses;

            if (rem < 0) break; 

            double d = (100 - ses * D) / 100.0;
            double p2 = X * d;

            if (rem >= p2) {
                ok = true;
                break;
            }

            ses++;
        }

        if (ok)
            cout << ses << endl;
        else
            cout << -1 << endl;
}
int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir3();
    }
    return 0;
}