//finding the union and intersection of the two given sorted array
#include<iostream>
#include<vector>
using namespace std;
void unionintersection(vector<int>& arr1,
    vector<int>& arr2,
    vector<int>& uni,
    vector<int>& inter){
    int i=0,j=0;
    while(i<arr1.size()&&j<arr2.size()){
       if(arr1[i]<arr2[j]){
        if(uni.empty()||uni.back()!=arr1[i]){
            uni.push_back (arr1[i]);
            
        }
        i++;
       }
       else if(arr1[i]>arr2[j]){
        if(uni.empty()||uni.back()!=arr2[j]){
            uni.push_back(arr2[j]);
        }
        j++;
       }
       else{
        if(uni.empty()||uni.back()!=arr1[i])
         uni.push_back(arr1[i]);
        if(inter.empty() || inter.back() != arr1[i])
          inter.push_back(arr1[i]);
        
            i++;
            j++;
       }
    }

       while(i<arr1.size()){
        if(uni.empty()||uni.back()!=arr1[i])
        uni.push_back(arr1[i]);
                    i++;
       }
       while(j<arr2.size()){
        if(uni.empty()||uni.back()!=arr2[j])
            uni.push_back(arr2[j]);
                     j++;
        }
    }

int main(){
    vector<int> arr1={1,2,3,4,5},arr2={1,2,3};
    vector<int> uni;
    vector<int> inter;
    unionintersection(arr1,arr2,uni,inter);
    cout<<"union: ";
    for(int x:uni)
    cout<<x<<" ";
    cout<<"\n intersection: ";
    for(int x:inter)
    cout<<x<<" ";
}
