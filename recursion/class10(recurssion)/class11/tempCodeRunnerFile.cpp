//finding the factorial of n number using parameterized way
#include<iostream>
using namespace std;
void findsum(int i,int fact){
    if(i<1){
        cout<<"the sum was: "<<fact;
        return;
    }
    findsum(i-1,fact*i);
}
int main(){
    int n;
    cout<<"enter the n:";
    cin>>n;
    findsum(n,1);
}