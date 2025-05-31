#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findGCD(vector<int>& nums) {
    int smallest = *min_element(nums.begin(), nums.end());
    int largest = *max_element(nums.begin(), nums.end());
    return gcd(largest, smallest);
}

int main() {
    vector<int> nums = {2, 5, 6, 9, 10};
    cout << findGCD(nums) << endl;
    return 0;
}
