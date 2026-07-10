//check if the array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
int issorted(vector<int> a){
    for(int i=1;i<a.size();i++){
        if(a[i]>=a[i-1]){

        }else{
            return false;
        }
    }
    return true;
}
int main(){
    vector<int> a={1,2,3,7,5,6};
    cout<<"was it a sorted array :"<<issorted(a)<<endl;
}