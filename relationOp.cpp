#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int* ptr1 = &n;
    int** ptr2 = &ptr1;
    int* ptr3 = *ptr2;

    // comparing equality
    if (ptr1 == ptr3) {
        cout << "Both point to same memory location";
    }
    else {
        cout << "ptr1 points to: " << ptr1 << endl;
        cout << "ptr3 points to: " << ptr3;
    }
    return 0;
}