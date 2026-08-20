//print from n to 1
#include<iostream>
using namespace std;
void printreverse(int n,int i){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    printreverse(n,i-1);
}
int main(){
    int n;
    cout<<"enter the n"<<endl;
    cin>>n;
    printreverse(n,n);
}