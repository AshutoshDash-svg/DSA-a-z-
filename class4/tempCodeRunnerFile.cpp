#include<iostream>
#include<vector>
using namespace std;
int missingeliment(vector<int>& arr){
    int n=arr.size()+1;
    int expectedsum=n*(n+1)/2;
    int actualsum=0;
    for(int i=0;i<arr.size();i++){
        actualsum+=arr[i];
    }
    return expectedsum-actualsum;
}
int main(){
    vector<int> arr={1,2,3,4,5,7};
    cout<<"the missing value is: "<<missingeliment(arr);
}