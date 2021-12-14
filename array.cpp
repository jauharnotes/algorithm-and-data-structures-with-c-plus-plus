#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int A[5];
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    cout << sizeof(A) << endl;
    cout << A[1] << endl;
    printf("%d\n", A[2]);

    int B[10] = {2,4,6,3,7,8};

    for(int i=0; i<10; i++) {
        cout << B[i] << endl;
    }

    for(int x:A) {
        cout << x << endl;
    }

    cout << sizeof(B) << endl;

    return 0;
}