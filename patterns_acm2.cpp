#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n - i; j++) {
            cout << char('A'+j)<<" ";
        }
        for(int k=0; k<=4*i-1; k++)
        {
            cout<<" ";
        }
        for (int j = n-i-1; j>=0; j--) {
            cout <<char('A'+j)<<" ";
        }
        cout << endl;
    }

    return 0;
}
