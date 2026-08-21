//multiple recursion call
// int fib(int n) {
//     if (n <= 1) {
//         return n;
//     }

//     return fib(n - 1) + fib(n - 2);
// }

// fib(5)
// ├── fib(4)
// └── fib(3)

    //           fib(5)
    //          /      \
    //      fib(4)     fib(3)
    //      /   \       /   \
    //  fib(3) fib(2) fib(2) fib(1)

//dry run of this code
// s-1
// fib(n) = fib(n-1) + fib(n-2)
// s-2
// fib(5)
// = fib(4) + fib(3)
// s-3
// fib(4)
// = fib(3) + fib(2)
// s-4
// fib(3)
// = fib(2) + fib(1)
// s-5
// fib(2)
// = fib(1) + fib(0)

// result
// fib(2) = 1 + 0 = 1

// fib(3) = 1 + 1 = 2

// fib(4) = 2 + 1 = 3

// fib(5) = 3 + 2 = 5


// recursion tree is 


//                     fib(5)
//                    /      \
//                 fib(4)    fib(3)
//                /    \      /    \
//            fib(3)  fib(2) fib(2) fib(1)
//            /  \    /  \   /  \
//        fib(2) fib(1) ...
//        /  \
//    fib(1) fib(0)



//find finbonacci using muktiple recursion call
#include <iostream>
using namespace std;

int fibonacci(int n) {
    // Base case
    if (n <= 1) {
        return n;
    }
    // Multiple recursion calls
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci number at position " << n << " is: "
         << fibonacci(n) << endl;
    return 0;
}


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


//the result is
// Enter n: 5

// Fibonacci number at position 5 is: 5


// dry run


// fibonacci(5)
//        |
//        +----------------+
//        |                |
//    fibonacci(4)     fibonacci(3)
//        |                |
//     +--+--+          +--+--+
//     |     |          |     |
//   fib(3) fib(2)    fib(2) fib(1)




// fib(2) = fib(1) + fib(0)
//        = 1 + 0
//        = 1

// fib(3) = fib(2) + fib(1)
//        = 1 + 1
//        = 2

// fib(4) = fib(3) + fib(2)
//        = 2 + 1
//        = 3

// fib(5) = fib(4) + fib(3)
//        = 3 + 2
//        = 5