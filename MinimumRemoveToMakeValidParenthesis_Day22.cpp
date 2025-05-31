#include <bits/stdc++.h>
using namespace std;

string minRemoveToMakeValid(string s) {
    stack<int> st;
    unordered_set<int> invalid;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') st.push(i);
        else if (s[i] == ')') {
            if (!st.empty()) st.pop();
            else invalid.insert(i);
        }
    }
    while (!st.empty()) {
        invalid.insert(st.top());
        st.pop();
    }

    string result;
    for (int i = 0; i < s.size(); ++i) {
        if (invalid.find(i) == invalid.end()) result += s[i];
    }
    return result;
}

int main() {
    string s;
    getline(cin, s);
    cout << minRemoveToMakeValid(s) << endl;
    return 0;
}
