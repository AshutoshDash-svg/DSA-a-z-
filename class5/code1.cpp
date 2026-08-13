//longest subarray with sum k
#include<iostream>
#include<vector>
using namespace std;
int longestsubarray(vector<int>& arr,int k){
    int len=0;
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            int sum=0;
            for(int x=i;x<=j;x++){
                sum+=arr[x];
            }
             if(sum==k){
                    len=max(len,j-i+1);
                }
        }
    }
    return len;
}
int main(){
    vector<int> arr={1,2,4,4,4,4,5,6};
    int k=6;
    cout<<longestsubarray(arr,k);
}



//better approach
#include<iostream>
#include<vector>
using namespace std;
int longestSubarray(vector<int>& arr, int k){
    int len = 0;

    for(int i=0;i<arr.size();i++){

        int sum = 0;

        for(int j=i;j<arr.size();j++){

            sum += arr[j];

            if(sum==k){
                len = max(len,j-i+1);
            }
        }
    }

    return len;
}
int main(){
    vector<int> arr={1,2,4,4,4,4,5,6};
    int k=6;
    cout<<longestSubarray(arr,k);
}

//onether better approach
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int longestSubarray(vector<int>& arr,int k){

    unordered_map<int,int> mp;

    int sum = 0;
    int maxLen = 0;

    for(int i=0;i<arr.size();i++){

        sum += arr[i];

        if(sum==k){
            maxLen = i+1;
        }

        if(mp.find(sum-k)!=mp.end()){
            maxLen = max(maxLen,i-mp[sum-k]);
        }

        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
    }

    return maxLen;
}

int main(){

    vector<int> arr={1,2,4,4,4,4,5,6};
    int k=6;

    cout<<longestSubarray(arr,k);
}

