//maximum subarray sum(brutforce approach)
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void maximumsubarray(vector<int>& arr){
    int n=arr.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
             maxi=max(sum,maxi);
        }
    }
    cout<<"the maximum subarray is"<<maxi;
}
int main(){
    vector<int> arr={-2,-3,4,-1,-2,1,5,-3};
    maximumsubarray(arr);
}

//better solution for the maximumsubarray
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void maximumsubarray(vector<int>& arr){
    int n=arr.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
                sum+=arr[j];
             maxi=max(sum,maxi);
        }
    }
    cout<<"the maximum subarray is"<<maxi;
}
int main(){
    vector<int> arr={-2,-3,4,-1,-2,1,5,-3};
    maximumsubarray(arr);
}

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