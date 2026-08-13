//2nd largest eliment of the array (this is not the optimal)
#include<iostream>
#include<vector>
using namespace std;
int secondlargest(vector<int> arr){
    int largest=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int secondlargest=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>secondlargest && arr[i]<largest){
            secondlargest=arr[i];
        }

    }
    return secondlargest;
}
int main(){
    vector<int> arr={12,34,56,33,45,66};
    cout<<"the secondlargest eliment was: "<<secondlargest(arr)<<endl;
}