//optimal approach(using two pointer) this is the optima approach when the array was in sorted form
#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return {left, right};
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }
    return {};
}
int main() {
    vector<int> nums = {2,3,4,7,11};
    int target = 9;
    vector<int> ans = twoSum(nums, target);
    cout << ans[0] << " " << ans[1];
}