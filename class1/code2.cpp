//2nd largest eliment of the array (this is not the optimal)
#include<iostream>
#include<vector>
using namespace std;
int secondlargest(vector<int> arr){
    int largest=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int secondlargest=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>secondlargest && arr[i]<largest){
            secondlargest=arr[i];
        }

    }
    return secondlargest;
}
int main(){
    vector<int> arr={12,34,56,33,45,66};
    cout<<"the secondlargest eliment was: "<<secondlargest(arr)<<endl;
}

//the optimal mathod was
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(vector<int> arr) {
    if (arr.size() < 2)
        return INT_MIN;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int num : arr) {

        if (num > largest) {
            secondLargest = largest;
            largest = num;
        }
        else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }
    }

    return secondLargest;
}

int main() {
    vector<int> arr = {12, 34, 56, 33, 45, 66};

    int ans = secondLargest(arr);

    if (ans == INT_MIN)
        cout << "Second largest element does not exist.";
    else
        cout << "Second largest element is: " << ans << endl;

    return 0;
}