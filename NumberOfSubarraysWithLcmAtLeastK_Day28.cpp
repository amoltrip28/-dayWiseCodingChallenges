#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int subarrayLCM(vector<int>& nums, int k) {
    int count = 0, n = nums.size();
    for (int i = 0; i < n; ++i) {
        int curr = nums[i];
        for (int j = i; j < n; ++j) {
            curr = lcm(curr, nums[j]);
            if (curr == k) count++;
            if (curr > k) break;
        }
    }
    return count;
}

int main() {
    vector<int> nums = {3, 6, 2, 7, 1};
    int k = 6;
    cout << subarrayLCM(nums, k) << endl;
    return 0;
}
