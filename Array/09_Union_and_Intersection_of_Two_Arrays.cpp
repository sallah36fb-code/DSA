#include <iostream>
using namespace std;

void findUnion(int arr1[], int n, int arr2[], int m) {

    cout << "Union: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }

    for (int i = 0; i < m; i++) {

        bool found = false;

        for (int j = 0; j < n; j++) {

            if (arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }

        if (found == false) {
            cout << arr2[i] << " ";
        }
    }

    cout << endl;
}


void findIntersection(int arr1[], int n, int arr2[], int m) {

    cout << "Intersection: ";
    for (int i = 0; i < n; i++) {

        bool found = false;

        // Check if arr1[i] exists in arr2
        for (int j = 0; j < m; j++) {

            if (arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }

        // Print if common
        if (found == true) {
            cout << arr1[i] << " ";
        }
    }

    cout << endl;
}


int main() {

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    findUnion(arr1, n, arr2, m);

    findIntersection(arr1, n, arr2, m);

    return 0;
}
