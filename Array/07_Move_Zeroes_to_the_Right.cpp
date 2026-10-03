#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
    int j = 0;

    while (j < n && arr[j] != 0) {
        j++;
    }

    for (int i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int arr[] = {1, 0, 2, 0, 3, 4, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZeroes(arr, n);

    cout << "Array after moving zeroes to the end: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
