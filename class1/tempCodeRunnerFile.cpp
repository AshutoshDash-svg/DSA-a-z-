//optimal approach
#include<iostream>
#include<vector>
using namespace std;
int removeduplicates(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        for(int j=1;j<arr.size();j++){
            if(arr[j]!=arr[i]){
                arr[i+1]=arr[j];
                i++;
            }
        }
        return i+1;
    }
}
int main(){
    vector<int> arr={1,2,2,3,3,4,4,5};
    int k=removeduplicates(arr);
    cout<<"number of unique eliment: "<<k<<endl;
    cout<<"array after removing duplicates: ";
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
