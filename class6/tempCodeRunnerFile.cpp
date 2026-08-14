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
    vector<int> arr = {4,2,3,1};
    int target = 6;
    vector<int> ans = twoSum(arr, target);
    cout << ans[0] << " " << ans[1];
}