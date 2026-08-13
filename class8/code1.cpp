//majority element(brutforce approach)
#include<iostream>
#include<vector>
using namespace std;
int majorityelement(vector<int>& arr ){
    int n=arr.size();
    for(int i=0;i<n;i++){
       int count=0;
       for(int j=0;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
        }
       }
       if(count>n/2){
        return arr[i];
       }
    }
    return -1;
}
int main(){
    vector<int> arr={2,2,3,3,1,2,2};
    cout<<majorityelement(arr);
    return 0;
}

//better approach approach(majority emlement)
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


//optimal approach (mores voating algorithm)
