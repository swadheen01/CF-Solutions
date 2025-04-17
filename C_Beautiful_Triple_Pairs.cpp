/*All Right Reserved by Swadheen*/

#include<bits/stdc++.h>
using namespace std;
//vector_of_array_approach
long long count(const vector<long long>& arr)
{
    long long n = arr.size();
    long long ans = 0;

    vector<array<long long,3>>tri;
    for(long long i=0; i<=n-3; i++){
        tri.push_back({arr[i], arr[i+1], arr[i+2]});
    }
    long long nt = tri.size();

    for(long long i=0; i<nt; i++)
    {
        long long j = i+1;
        for(long long j=i+1; j<nt; j++)
        {
            long long diff = 0;
            if(tri[i][0] != tri[j][0]) diff++;
            if(tri[i][1] != tri[j][1]) diff++;
            if(tri[i][2] != tri[j][2]) diff++;

            if(diff == 1) ans++;
        }
    }
    return ans;
}

int main()
{
    long long t; cin>>t;
    while(t--)
    {
        long long n; cin>>n;
        vector<long long>arr(n);
        for(long long i=0; i<n; i++){
            cin>>arr[i];
            }
        long long result = count(arr);
        cout<<result<<endl;
    }
}