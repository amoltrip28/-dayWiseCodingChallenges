#include <iostream>
#include <stack>
#include <climits>
using namespace std;

class MinStack {
    stack<int> s;
    stack<int> mins;
public:
    void push(int val) {
        s.push(val);
        if (mins.empty() || val <= mins.top()) mins.push(val);
    }

    void pop() {
        if (s.top() == mins.top()) mins.pop();
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return mins.top();
    }
};

int main() {
    MinStack obj;
    obj.push(-2);
    obj.push(0);
    obj.push(-3);
    cout << obj.getMin() << endl;
    obj.pop();
    cout << obj.top() << endl;
    cout << obj.getMin() << endl;
    return 0;
}
