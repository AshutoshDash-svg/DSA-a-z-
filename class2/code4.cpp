//linearsearch
#include<iostream>
#include<vector>
using namespace std;
int linearsearch(vector<int>& arr,int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={6,7,8,4,1};
    int target=4;
    cout<<linearsearch(arr,target);
}