#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    //int c = n + (n-1)/(m-1);
    int days = 0;
    while (n>0)
    {
        days++;
        n--;
        if(days%m==0)
        {
            n++;
        }
    }
    cout<<days<<endl;
}