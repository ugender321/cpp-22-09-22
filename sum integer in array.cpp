#include <iostream>
using namespace std;
 
int main() {
 
   int arr[5], i, sum = 0;
    int *ptr;
 
    cout << "Enter any 5 numbers :";
    for (i = 0; i < 5; i++) {
        cin >> arr[i];
    }
 
    ptr = arr;
    for (i = 0; i < 5; i++) {
        sum = sum + *(ptr + i);
    }
 
    cout << "\nSum of array elements :" << sum;
 
    return 0;
 
}