#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string a = "codeforces";
    while(t--)
    {
        string s; cin>>s;
        int c = 0;
        for(int i=0; i<10; i++)
        {
            if(s[i] != a[i]) c++;
        }
        cout<<c<<endl;

    }
    return 0;
}