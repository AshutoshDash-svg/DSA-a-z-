//reverse an array using recursion
#include<iostream>
using namespace std;
void reversearray(int arr[],int left,int right){
    if(left>=right){
        return;
    }
    swap(arr[left],arr[right]);
    reversearray(arr,left+1,right-1);
}
int main(){
    int arr[]={1,3,5,7,9,10};
    int n=6;
    reversearray(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


//if we take the arr from user (only for self improvement)
#include <iostream>
using namespace std;
void reverseArray(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }
    swap(arr[left], arr[right]);
    reverseArray(arr, left + 1, right - 1);
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
     cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverseArray(arr, 0, n - 1);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}



//reverse the array using only one variable i
#include <iostream>
using namespace std;
void reverseArray(int arr[], int i, int n) {
    if (i >= n / 2) {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverseArray(arr, i + 1, n);
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverseArray(arr, 0, n);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


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