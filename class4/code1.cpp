//finding missing eliment in an array
//brutforce approach
#include<iostream>
#include<vector>
using namespace std;
int missingeliment(vector<int> & arr){
    for(int i=1;i<arr.back();i++){
       int flag=0;
       for(int j=0;j<arr.size();j++){
        if(arr[j]==i){
            flag=1;
            break;
        }
       }
       if (flag==0){
        cout<<i<<" ";
       }
    }
}
int main(){
    vector<int>arr={1,2,3,5,6,8,10,14};
    int ans=missingeliment(arr);
}
//1st optimal approach(using sum formula_)
#include<iostream>
#include<vector>
using namespace std;
int missingeliment(vector<int>& arr){
    int n=arr.size();
    int expectedsum=n*(n+1)/2;
    int actualsum=0;
    for(int i=0;i<arr.size();i++){
        actualsum+=arr[i];
    }
    return expectedsum-actualsum;
}
int main(){
    vector<int> arr={1,2,3,4,5,7};
    cout<<"the missing value is: "<<missingeliment(arr);
}

//2nd optimal aaproach (using xor method)
