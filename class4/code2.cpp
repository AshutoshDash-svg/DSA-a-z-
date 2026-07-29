//maximum consucative ones
#include<iostream>
#include<vector>
using namespace std;
int maxconsucativeone(vector<int>& arr){
    int maxi=0;
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            count++;
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    return maxi;
}
int main(){
    vector<int> arr={1,1,1,3,4,6,1,1,1,1};
    cout<<"the maximum consucative one wsa: "<<maxconsucativeone(arr);
   


}

