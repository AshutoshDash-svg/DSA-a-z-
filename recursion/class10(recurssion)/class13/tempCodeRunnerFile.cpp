//onether method is
#include<iostream>
using namespace std;
int fibonacci2(int n){
    if(n<=1){
        return n;
    }
    int last=fibonacci2(n-1);
    int secondlast=fibonacci2(n-2);
    return last +secondlast;
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci number at position " << n << " is: "
         << fibonacci2(n) << endl;
    return 0;
}