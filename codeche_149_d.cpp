#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        priority_queue<int> q;
        ll a = 0;
        int b = 1;
        for (int i = 1; i < n; ++i)
        {
            if (s[i] == s[i - 1])
                b++;
            else
            {
                q.push(b);
                b = 1;
            }
        }
        q.push(b);
        while (q.size() > 1)
        {
            int c = q.top();
            q.pop();
            c--;
            if (c > 0)
                q.push(c);
            a += q.size() - 1;
        }
        cout << a << endl;
    }
}
