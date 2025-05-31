#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int getNext(int n) {
        int total = 0;
        while (n > 0) {
            int d = n % 10;
            total += d * d;
            n /= 10;
        }
        return total;
    }

    bool isHappy(int n) {
        unordered_set<int> seen;
        while (n != 1 && !seen.count(n)) {
            seen.insert(n);
            n = getNext(n);
        }
        return n == 1;
    }
};

int main() {
    Solution sol;
    int n = 19;
    cout << boolalpha << sol.isHappy(n) << endl;
    return 0;
}
