#include <iostream>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low = 1, high = num;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long square = mid * mid;
            if (square == num) return true;
            else if (square < num) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};

int main() {
    Solution sol;
    int num;
    cin >> num;
    if (sol.isPerfectSquare(num)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
