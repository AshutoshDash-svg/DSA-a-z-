//recursion:- When a function call it-selfuntil a specifical condition is met
// Base case → jahan function rukega.
// Recursive case → jahan function khud ko call karega.
//print 0 to 5 in reverse order(using recursion)
#include <iostream>
using namespace std;

void print(int n) {
    // Base case
    if (n == 0) {
        return;
    }

    // Recursive call
    print(n - 1);

    cout << n << " ";
}

int main() {
    print(5);
    return 0;
}


//