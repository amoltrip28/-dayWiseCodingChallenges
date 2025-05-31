#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int left = -1, right = -1;
    int low = 0, high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] >= target) high = mid - 1;
        else low = mid + 1;
    }
    if (low == nums.size() || nums[low] != target) return {-1, -1};
    left = low;
    
    low = 0; high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] <= target) low = mid + 1;
        else high = mid - 1;
    }
    right = high;
    return {left, right};
}

int main() {
    vector<int> arr = {5,7,7,8,8,10};
    int target = 8;
    vector<int> res = searchRange(arr, target);
    cout << "First and Last Positions: [" << res[0] << ", " << res[1] << "]\n";
    return 0;
}
