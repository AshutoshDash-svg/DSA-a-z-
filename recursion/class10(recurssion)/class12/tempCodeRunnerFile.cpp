//check whether a string is palindrom or not
//ex=madam=madam
#include<iostream>
using namespace std;
bool ispalindrome(string str,int i){
    int n=str.length();
    if(i>=n/2){
        return true;
    }
    if(str[i]!=str[n-i-1]){
        return false;
    }
    ispalindrome(str,i+1);
}
int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    if (ispalindrome(str, 0)) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}