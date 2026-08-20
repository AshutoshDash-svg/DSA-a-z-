//print linearly from 1 to n 
//(using backtracking)
#include <iostream>
using namespace std;

void print(int i, int n) {
    if (i < 1) {
        return;
    }
    print(i - 1, n);   // pehle recursion mein neeche jao
    cout << i << endl; // backtracking ke time print hoga
}
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    print(n, n);

    return 0;
}