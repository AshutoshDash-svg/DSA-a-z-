//movieing 0's to the end of the array
#include<iostream>
#include<vector>
using namespace std;
void zerostotheend(vector<int>& arr){
    int j=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
        while(j<arr.size()){
            for(int i=0;i<j.size();,i++){
                arr[i]=arr[j];
            }

        }
    }

}