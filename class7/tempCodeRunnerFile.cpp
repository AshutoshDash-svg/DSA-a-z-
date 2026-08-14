//optimal approach(dutch national flag algorithm)
#include<iostream>
#include<vector>
using namespace std;
void sorting012(vector<int>& arr){
    int low=0;
    int mid=0;
    int high=arr.size()-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }

    }
}
int main(){
    vector<int> arr={1,0,2,0,1,2,1,0,2,1,0,2};
    sorting012(arr);
    for(int x:arr){
        cout<<x<<" ";
    }
}
