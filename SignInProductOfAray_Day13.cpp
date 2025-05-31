#include <iostream>
#include <vector>
using namespace std;

int arraySign(vector<int>& nums) {
    int sign = 1;
    for (int num : nums) {
        if (num == 0) return 0;
        if (num < 0) sign *= -1;
    }
    return sign;
}

int main() {
    vector<int> nums = {-1, -2, -3, -4, 3, 2, 1};
    int result = arraySign(nums);
    cout << "Sign of product: " << result << endl;
    return 0;
}
