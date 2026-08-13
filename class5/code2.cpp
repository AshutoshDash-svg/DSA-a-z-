#include<iostream>
#include<vector>
using namespace std;
void diffonezero(vector<int>& arr){
    int right=0;
    int left=arr.size()-1;
    while(left<right){
        while(left<arr[right] && arr[left]==1)
        left++;
        while(left<arr[right] && arr[right]==0)
        right--;
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}
int main(){
    vector<int> arr={1,0,1,0,1,1,1,0,1,1,0};
    cout<<"",diffonezero(arr);
}