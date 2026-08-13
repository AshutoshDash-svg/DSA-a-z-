//two sum problem(brute force approach)
#include<iostream>
#include<vector>
using namespace std;
vector<int> twosum(vector<int>& arr,int target){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==target){
                return {i,j};
            }
        }
    }
    return {};
}
int main(){
    vector<int> arr={1,2,3,4};
    int target=6;
    vector<int> ans=twosum(arr,target);
    cout<<ans[0]<<" "<<ans[1];
}


//beter approach(using hashmap) this is the optimal when the array is in unsorted order
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& arr, int target){
    unordered_map<int,int> mp;
    for(int i=0; i<arr.size(); i++){
        int complement = target - arr[i];
        if(mp.find(complement) != mp.end()){
            return {mp[complement], i};
        }
        mp[arr[i]] = i;
    }
    return {};
}
int main(){
    vector<int> arr = {1,2,3,4};
    int target = 6;
    vector<int> ans = twoSum(arr, target);
    cout << ans[0] << " " << ans[1];
}

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