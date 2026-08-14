#include<iostream>
#include<vector>
using namespace std;
void diffonezero(vector<int>& arr){
    int left=0;
    int right=arr.size()-1;
    while(left<right){
        while(left<right && arr[left]==0)
        left++;
        while(left<right && arr[right]==1)
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
    diffonezero(arr);
    for(int x:arr){
        cout<<x<<" ";
    }
}