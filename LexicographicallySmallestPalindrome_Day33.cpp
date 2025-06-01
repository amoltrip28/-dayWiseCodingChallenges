#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.size();
        for (int i = 0; i < n / 2; ++i) {
            if (s[i] != s[n - 1 - i]) {
                char smaller = min(s[i], s[n - 1 - i]);
                s[i] = s[n - 1 - i] = smaller;
            }
        }
        return s;
    }
};

int main() {
    Solution sol;
    string input = "egcfe";
    string result = sol.makeSmallestPalindrome(input);

    cout << "Smallest Palindrome: " << result << endl;

    return 0;
}
