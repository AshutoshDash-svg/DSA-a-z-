//left roated the array by one place
#include<iostream>
#include<vector>
using namespace std;
 void roatedarray(vector<int>& arr){
 int temp=arr[0];
 for(int i=1;i<arr.size();i++){
    arr[i-1]=arr[i];
   }
   arr[arr.size()-1]=temp;
 }
 int main(){
    vector<int> arr={1,3,5,7,9};
    roatedarray(arr);
    cout<<"the roated array was: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
 }