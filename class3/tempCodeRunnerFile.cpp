#include<iostream>
#include<vector>
using namespace std;
void hashint(vector<int>& number,int arr[],int n){
   for(int j=0;j<number.size();j++){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==number[j]){
        count=count+1;
        }
    }
     cout<<number[j]<<"->"<<count<<endl;
    }
   }
   int main()
{
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> number = {2, 4, 5};
    hashint(number, arr, n);
    return 0;
}

