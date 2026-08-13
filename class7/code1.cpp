//brutforce approach for this problem
#include<iostream>
#include<vector>
using namespace std;
void sortingon012(vector<int>& arr){
    int count0=0;
    int count1=0;
    int count2=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            count0++;
        }
         else if (arr[i]==1){
        count1++;
        }
        else{
        count2++;
        }
    }
    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    for(int i=count0;i<count0+count1;i++){
        arr[i]=1;
    }
    for(int i=count0+count1;i<arr.size();i++){
        arr[i]=2;
    }
}
int main(){
    vector<int> arr={1,0,2,0,1,2,1,0,2,1,0,2};
    sortingon012(arr);
    for(int x:arr){
        cout<<x<<" ";
    }


}
//optimal approach(dutch national flag algorithm)
#include<iostream>
#include<vector>
using namespace std;
void sorting012(vector<int>& arr){
    int low=0;
    int mid=0;
    int high=arr.size()-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }

    }
}
int main(){
    vector<int> arr={1,0,2,0,1,2,1,0,2,1,0,2};
    sorting012(arr);
    for(int x:arr){
        cout<<x<<" ";
    }
}
