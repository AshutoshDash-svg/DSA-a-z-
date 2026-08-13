#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int majorityelement(vector<int>& arr ){
    unordered_map<int, int> mp;
    int n=arr.size();
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    
    if(mp[arr[i]]>n/2){
        return arr[i];
    }
}
return -1;
}
int main(){
    vector<int>arr={1,2,3,2,3,2,1};
    cout<<majorityelement(arr);
}
