//print linearly from 1 to n
#include<iostream>
using namespace std;
void numberprintiong(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    numberprintiong(i+1,n);
}
int main(){
    int n;
    cout<<"enter the n"<<endl;
    cin>>n;
    numberprintiong(1,n);
    return 0;
}