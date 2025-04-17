/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Aug 28 2024 8:50:17 PM
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

int sir()
{
    int n; cin>>n;
    int arr[n];
    int c =0;
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0) c++;

    }
    if(c==n || c==0) cout<<0<<endl;
    else cout<<c<<endl;
}
int solve(const vector<int>& A) {
    int n = A.size();
    int mn = n;
    int sum1 = 0;
    int neg = 0;
    
    for (int i = 0; i < n; ++i) {
        if (A[i] > 0) {
            sum1 += A[i];
        } else if (A[i] < 0) {
            sum1 += (A[i]*(-1));
            neg++;
        } else {

            if (sum1 > 0) {
                mn = min(mn, neg);
            }
            sum1 = 0;
            neg = 0;
        }
    }
    if(neg==0 || neg==n) return 0;
    else if (sum1 > 0) {
        mn = min(mn, neg);
    }

    return mn == n ? 0 : mn;
}
int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        cout << solve(A) << endl;
    }
    return 0;
}

