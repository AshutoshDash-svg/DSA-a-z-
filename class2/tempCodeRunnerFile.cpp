//leftroated the aray by dplaces
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void leftroatedarr(vector<int>& arr,int d){
    int n=arr.size();
    d=d%n;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
}
int main(){
     vector<int> arr={1,2,3,4,5,6,7};
     int d=2;
     leftroatedarr(arr,d);
     for(int x: arr){
        cout<<x<<" ";
     }
     return 0;
}
