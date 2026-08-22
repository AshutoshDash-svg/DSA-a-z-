//selection sort
#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;       
             }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Complexity
// Best case: O(n²)
// Average case: O(n²)
// Worst case: O(n²)
// Space: O(1) → extra array nahi ban raha
// Swaps: Maximum n-1

//concept
// i → position

// i batata hai kis position par smallest element rakhna hai.

// j → searching

// j baaki array mein smallest element search karta hai.

// mini → smallest ka index

// mini store karta hai ki abhi tak smallest element kis index par hai.
// Starting Array
// Index:   0   1   2   3   4
//          ↓   ↓   ↓   ↓   ↓
// Array:  50  10  30  20  40
// 🔵 ROUND 1 — i = 0

// Outer loop:

// i = 0

// Matlab:

// Position 0 par sabse chhota element rakhna hai.

// Current:

// 50 10 30 20 40
// ↑
// i
// Step 1: mini = i
// int mini = i;

// So:

// mini = 0

// Matlab abhi hum maan rahe hain:

// "50 hi smallest hai."

// 50 10 30 20 40
// ↑
// mini
// Ab inner loop start
// j = i + 1

// So:

// j = 1

// Compare:

// if(arr[j] < arr[mini])

// Values:

// arr[j]    = arr[1] = 10
// arr[mini] = arr[0] = 50

// Check:

// 10 < 50 ✅

// Toh:

// mini = j;

// Now:

// mini = 1

// Array:

// 50 10 30 20 40
//     ↑
//    mini

// Ab hum jaante hain ki 10, 50 se chhota hai.

// j = 2

// Ab:

// arr[j] = arr[2] = 30
// arr[mini] = arr[1] = 10

// Check:

// 30 < 10 ❌

// Kuch change nahi.

// mini = 1
// j = 3
// arr[j] = 20
// arr[mini] = 10

// Check:

// 20 < 10 ❌

// No change.

// mini = 1
// j = 4
// arr[j] = 40
// arr[mini] = 10

// Check:

// 40 < 10 ❌

// No change.

// So final:

// mini = 1

// Matlab poore unsorted part mein smallest element 10 hai, aur uska index 1 hai.

// 🔄 Ab SWAP

// Code:

// swap(arr[i], arr[mini]);

// Currently:

// i = 0
// mini = 1

// So:

// swap(arr[0], arr[1])

// Before:

// 50 10 30 20 40
// ↑  ↑
// i mini

// After:

// 10 50 30 20 40

// 🎉 First position sorted!

// 🔵 ROUND 2 — i = 1

// Ab outer loop next iteration:

// i = 1

// Matlab:

// Ab position 1 par smallest element rakhna hai.

// Current array:

// 10 50 30 20 40
//     ↑
//     i

// Set:

// mini = i;

// So:

// mini = 1

// Abhi hum maan rahe:

// 50

// smallest hai.

// j = i + 1
// j = 2

// Compare:

// arr[2] = 30
// arr[1] = 50
// 30 < 50 ✅

// So:

// mini = 2
// j = 3

// Compare:

// arr[3] = 20
// arr[2] = 30
// 20 < 30 ✅

// So:

// mini = 3
// j = 4

// Compare:

// arr[4] = 40
// arr[3] = 20
// 40 < 20 ❌

// No change.

// Final:

// mini = 3

// Smallest element = 20.

// Swap
// swap(arr[1], arr[3])

// Before:

// 10 50 30 20 40
//     ↑     ↑
//     i    mini

// After:

// 10 20 30 50 40

// Ab first 2 positions sorted:

// 10 20 | 30 50 40
// 🔵 ROUND 3 — i = 2

// Current:

// 10 20 30 50 40
//        ↑
//        i

// Set:

// mini = 2

// So initially:

// mini → 30
// j = 3
// arr[3] = 50
// arr[2] = 30
// 50 < 30 ❌

// No change.

// j = 4
// arr[4] = 40
// arr[2] = 30
// 40 < 30 ❌

// No change.

// So:

// mini = 2

// 30 already smallest hai.

// Swap:

// swap(arr[2], arr[2])

// No actual change:

// 10 20 30 50 40
// 🔵 ROUND 4 — i = 3

// Current:

// 10 20 30 50 40
//           ↑
//           i

// Set:

// mini = 3

// So:

// mini → 50

// Only one element check karna hai.

// j = 4
// arr[4] = 40
// arr[3] = 50

// Check:

// 40 < 50 ✅

// So:

// mini = 4

// Now swap:

// 10 20 30 50 40
//           ↑  ↑
//           i mini

// After:

// 10 20 30 40 50

// 🎉 Sorted!

// 🧠 Pura dry run ek table mein
// Round	i	Minimum	mini	Array after swap
// 1	0	10	1	10 50 30 20 40
// 2	1	20	3	10 20 30 50 40
// 3	2	30	2	10 20 30 50 40
// 4	3	40	4	10 20 30 40 50
// 🔥 Selection Sort ko bas is tarah yaad rakh

// Har round:

//         FIND MINIMUM
//              ↓
// 50  10  30  20  40
// ↑
// i

// Minimum 10 mila:

// 10  50  30  20  40
// ↑
// sorted

// Phir:

// 10 | 50  30  20  40
//      ↑
//      i

// Minimum 20 mila:

// 10 20 | 30 50 40

// Phir:

// 10 20 30 | 50 40

// Phir:

// 10 20 30 40 | 50
// Ek line mein:

// i position fix karta hai → j minimum search karta hai → mini minimum ka index rakhta hai → end mein swap hota hai.