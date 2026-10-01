#include <iostream>
#include <algorithm>
using namespace std;

// Left Rotate Array by One Place
void leftRotateByOne(int arr[], int n) {
    int first = arr[0];

    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = first;
}

// Left Rotate Array by K Places
void leftRotateByK(int arr[], int n, int k) {
    k = k % n;

    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    leftRotateByOne(arr1, n1);

    cout << "After Left Rotation by One: ";

    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    int k = 3;

    leftRotateByK(arr1, n1, k);

    cout << "After Left Rotation by " << k << " Places: ";

    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }

    cout << endl;

    return 0;
}
