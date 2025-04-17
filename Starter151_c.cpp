/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Sep 11 2024 10:22:21 PM
 */

#include <bits/stdc++.h>
using namespace std;

int sir(const string& s, int n) {
    int cnt0 = count(s.begin(), s.end(), '0');
    int cnt1 = n - cnt0;
    int total = 0;

    for (int k = 1; k <= n; ++k) {
        if (k>=cnt0 && (k-cnt0)%2==0) {
            ++total;
        }
        else if(k>=cnt1 && (k-cnt1)%2==0)
        {
            total++;
        }
    }
    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        cout << sir(S, N) << '\n';
    }
    return 0;
}
