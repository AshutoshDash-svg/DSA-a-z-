//movieing 0's to the end of the array
#include<iostream>
#include<vector>
using namespace std;
void zeromovestoend(vector<int>& arr){
    int j=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
            }
        while(j<arr.size()){
             for(int i=0;i<arr.size();i++){
                 arr[j]=0;
                 j++;
        }
    }
}
    int main(){
        vector<int> arr={1,2,0,0,4,5,0,6,0,7};
        zeromovestoend(arr);
        for(int x:arr){
            cout<<x<<" ";
        }
        return 0;
    }


//using two-pointer approach
#include<iostream>
#include<vector>
using namespace std;
void movezero(vector<int>& arr){
    int j=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main(){
    vector<int> arr={1,0,2,0,3,0,4,0,5,0,6,0};
    movezero(arr);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}
