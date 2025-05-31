#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int evalRPN(vector<string>& token) {
    stack<int> st;
    for (int i = 0; i < token.size(); i++) {
        if (token[i] == "+" || token[i] == "-" || token[i] == "*" || token[i] == "/") {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if (token[i] == "+") {
                st.push(b + a);
            } else if (token[i] == "-") {
                st.push(b - a);
            } else if (token[i] == "*") {
                st.push(b * a);
            } else {
                st.push(b / a);
            }
        } else {
            st.push(stoi(token[i]));
        }
    }
    return st.top();
}

int main() {
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    cout << evalRPN(tokens) << endl;
    return 0;
}
