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