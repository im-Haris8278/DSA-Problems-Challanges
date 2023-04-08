//Method 1

#include <iostream>
using namespace std;

int findNumberFromRange(int A[], int index1, int index2, int Num) {
    for ( int index = index1; index < index2; index++ ) {
        if (Num == A[index]) {
            cout << index << ", ";
        }
    }
    return -1;
}

int main() {
//	int A[] = {0, 1, 2, 3, 3, 3, 4}
    int A[] = {0, 1, 4, 3, 4, 3, 3, 4};
    int i1, i2, n;
    cout << "Enter the Start Index: ";
    cin >> i1;
    cout << "Enter the End Index: ";
    cin >> i2;
    cout << "Enter the Number to Find: ";
    cin >> n;

    findNumberFromRange(A, i1, i2, n);

    return 0;
}