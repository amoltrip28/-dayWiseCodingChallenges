#include <iostream>
#include <queue>
using namespace std;

class MyStack {
    queue<int> q;

public:
    void push(int x) {
        q.push(x);
        for (int i = 0; i < q.size() - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int val = q.front();
        q.pop();
        return val;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

int main() {
    MyStack st;
    st.push(1);
    st.push(2);
    cout << st.top() << endl;
    cout << st.pop() << endl;
    cout << st.empty() << endl;
    return 0;
}
