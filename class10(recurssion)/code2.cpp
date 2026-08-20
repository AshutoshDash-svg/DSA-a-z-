//print name 5 times using recursion
#include<iostream>
using namespace std;
void printname(int i,int n){
    if(i>n){
        return;
    }
    cout<<"Ashutosh Dash"<<endl;
    printname(i+1,n);
}
int main(){
    int n;
    cout<<"enter the n";
    cin>>n;
    printname(1,n);
    return 0;
}
