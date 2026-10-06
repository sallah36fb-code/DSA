#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    int xor1 = 0;
    int xor2 = 0;

    for (int i = 0; i < n; i++) {
        xor1 = xor1 ^ arr[i];
    }

    for (int i = 0; i <= n; i++) {
        xor2 = xor2 ^ i;
    }

    return xor1 ^ xor2;
}


int main() {

    int arr[] = {3, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Missing Number: "
         << findMissingNumber(arr, n);

    return 0;
}
