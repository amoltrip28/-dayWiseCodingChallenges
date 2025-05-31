#include <iostream>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) return false;

        int sum = 1;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                sum += i;
                if (i != num / i) {
                    sum += num / i;
                }
            }
        }

        return sum == num;
    }
};

int main() {
    Solution sol;
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (sol.checkPerfectNumber(num))
        cout << num << " is a perfect number." << endl;
    else
        cout << num << " is not a perfect number." << endl;

    return 0;
}
