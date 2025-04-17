#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(const string& s) {
    int left = 0;
    int right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}

bool pass(const string& s) {
    string cons;
    for (char c : s) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            cons += c;
        }
    }
    return isPalindrome(cons);
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string s;
        getline(cin, s);
        if (pass(s)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
