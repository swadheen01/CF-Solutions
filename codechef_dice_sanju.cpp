#include<bits/stdc++.h>
using namespace std;

void sir()
{
    int a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;

    int maxx = max({a1,a2,a3});
    int minn = min({a1,a2,a3});

    int maxx2 = max({b1,b2,b3});
    int minn2 = min({b1,b2,b3});

    int a = maxx*100 + minn + (a1+a2+a3-maxx-minn)*10;
    int b = maxx2*100 + minn2 + (b1+b2+b3-maxx2-minn2)*10;

    if(a>b) cout<<"Alice"<<endl;
    else if(b>a) cout<<"Bob"<<endl;
    else cout<<"Tie"<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}