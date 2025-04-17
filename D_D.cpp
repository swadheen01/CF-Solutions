#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define co cout
#define pb push_back
#define endl "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

void sir()
{
    ll r,c;  cin>>r>>c;
    //if(r%2==1 && c%2==1)
    //{cout<<'('<<endl; return;}
    if(r%2==0)
    {
        if(c%2==0 && r>=c)
        {
            for(ll i=0; i<r; i++)
            {
                for(ll j=0; j<c; j++)
                {
                    if(i%2==0)
                    {
                        if(j%2==0) cout<<'(';
                        else cout<<')';
                    }
                    else
                    {
                        if(j%2==0) cout<<'(';
                        else cout<<')';
                    }
                }
                cout<<endl;
            }
            //cout<<endl;
            return;
        }
        else if(c%2==0 && r<c){
            for(ll i=0; i<r; i++)
            {
                for(ll j=0; j<c; j++)
                {
                    if(i%2==0) cout<<'(';
                    else if(i%2) cout<<')';
                }
                cout<<endl;
            }
            //cout<<endl;
            return;
        }
        else    // c odd
        {
            for(ll i=0; i<r; i++)
            {
                for(ll j=0; j<c; j++)
                {
                    if(i%2==0)cout<<'(';
                    
                    else cout<<')';
                }
                cout<<endl;
            }
            //cout<<endl;
            return;
        }
    }
    else
    {
        if(c%2==0)
        {
            for(ll i=0; i<r; i++)
            {
                for(ll j=0; j<c; j++)
                {
                    if(i%2==0)
                    {
                        if(j%2==0) cout<<'(';
                        else cout<<')';
                    }
                    else if(i%2==1)
                    {
                        if(j%2==0) cout<<'(';
                        else cout<<')';
                    }
                }
                cout<<endl;
            }//cout<<endl;
            return;

        }
        else{
        
            // for(ll i=0; i<r/2+1; i++)
            // {
            //     for(ll j=0; j<c; j++)
            //     {
            //         cout<<'(';
            //         //else cout<<'(';
            //     }
            //     cout<<endl;
            // }
            // for(ll i=0; i<r/2; i++)
            // {
            //     for(ll j=0; j<c; j++)
            //     {
            //         cout<<')';
            //         //else cout<<'(';
            //     }
            //     cout<<endl;
            // }
            //cout<<endl;
            for(ll i=0; i<r; i++)
            {
                for(ll j=0; j<c; j++)
                {
                    if(j%2) cout<<')';
                    else cout<<'(';
                }
                cout<<endl;
            }
            return;
    }
    }
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