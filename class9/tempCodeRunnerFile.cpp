//the optimal approach for thr maximum subarray(kaddens algorithm)
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
long long maximumsubarraysum(vector<int>& arr){
    int n=arr.size();
    long long sum=0;
    long long maxi=LONG_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}
int main(){
    vector<int> arr={-2,-3,4,-1,-2,1,5,-3};
    cout<<maximumsubarraysum(arr);
    return 0;
}