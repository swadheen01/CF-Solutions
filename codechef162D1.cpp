#include <iostream>
#include <string>
using namespace std;

int sir(const string& s) {
    int ca = 0, cb = 0, op = 0;

    for (char c : s) {
        if (c == 'A') {
            if (cb > 0) {
                cb--;
                ca++;   
            } else {
                ca++;
                op++;
            }
        } else {
            if (ca > 0) {
                ca--;  
                cb++;  
            } else {
                cb++;
                op++;
            }
        }
    }
    
    return op;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        cout << sir(s) << endl;
    }

    return 0;
}
