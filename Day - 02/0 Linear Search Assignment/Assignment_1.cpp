//Method 2

#include <iostream>
using namespace std;

int findNumberFromRange(int A[], int Num) {
    for ( int index = 1; index < 4; index++ ) {
        if (Num == A[index]) {
            cout << index;
        }
    }
    return -1;
}

int main() {
    int A[] = {0, 1, 4, 3, 3, 3, 4};
//    int A[] = {0, 1, 2, 3, 3, 3, 4};
    int n = 4;

    findNumberFromRange(A, n);

    return 0;
}