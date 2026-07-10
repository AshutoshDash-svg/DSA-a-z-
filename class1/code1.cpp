//largest eliment of the array
#include<iostream>
#include<vector>
using namespace std;
int largestnum (vector<int> arr){
    int largest=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    vector<int> arr={12,23,45,6,43,64};
    cout<<"the largest number was: "<<largestnum(arr)<<endl;

}