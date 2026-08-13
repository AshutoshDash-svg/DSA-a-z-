//the number who appear less tthen two times(brutforce)
#include<iostream>
#include<vector>
using namespace std;
int appearlessthentwo(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
       int num=arr[i];
       int count=0;
       for(int j=0;j<arr.size();j++){
        if(arr[j]==num){
            count++;
        }
       }
         if (count==1)
        {
            cout<< num <<" ";
        }
    }
    return -1;
}
int main(){
    vector<int> arr={1,1,2,3,3,4,4,5};
    appearlessthentwo(arr);
}


//using hash map(better approach)
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int appearlessthentwo(vector<int>& arr){
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    for(int i=0;i<arr.size();i++){
        if(mp[arr[i]]==1){
            cout<<arr[i]<<" ";
        }
    }
    return -1;
}
int main(){
    vector<int>arr={1,1,2,2,3,4,4,5};
    appearlessthentwo(arr);
}


//optimal approach
#include<iostream>
#include<vector>
using namespace std;
int appearlessthentwo(vector<int>& arr){
    int xorr=0;
    for(int i=0;i<arr.size();i++){
        xorr=xorr ^arr[i];

    }
    return xorr;
}
int main(){
    vector<int> arr{1,1,2,4,4,5,5};
    cout<<appearlessthentwo(arr);
}