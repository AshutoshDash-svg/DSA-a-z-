//QUICK SORT
#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[low],arr[j]);
    return j;

}
void qs(vector<int>& arr,int low,int high){
     if(low<high){
        int pivindex=partition(arr,low,high);
        qs(arr,low,pivindex-1);
        qs(arr,pivindex+1,high);
     }
}
vector<int> quicksort(vector<int>arr){
    qs(arr,0,arr.size()-1);
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   arr=quicksort(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}