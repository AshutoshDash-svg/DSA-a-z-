//sum of first n number using recursion
//parameterized way
#include<iostream>
using namespace std;
void findsum(int i,int sum){
    if(i<1){
        cout<<"the sum was: "<<sum;
        return;
    }
    findsum(i-1,sum+i);
}
int main(){
    int n;
    cout<<"enter the n:";
    cin>>n;
    findsum(n,0);
}


//functional way
#include<iostream>
using namespace std;
int evaluatesum(int n){
    if(n==0){
        return 0;
    }
    return n+evaluatesum(n-1);
}
int main(){
    int n;
    cout<<"enter the n:";
    cin>>n;
    cout<<evaluatesum(n);
}


//finding the factorial of n number using functionalway in recursion
//functional way
#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"enter the n:";
    cin>>n;
    cout<<fact(n);
}


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