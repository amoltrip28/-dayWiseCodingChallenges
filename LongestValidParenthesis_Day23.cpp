#include <iostream>
using namespace std;

int longestValidParentheses(string s) {
    stack<int> st;
    st.push(-1); // Acts as base for length calculation
    int maxLen = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            st.pop();
            if (!st.empty()) {
                maxLen = max(maxLen, i - st.top());
            } else {
                st.push(i);
            }
        }
    }

    return maxLen;
}
