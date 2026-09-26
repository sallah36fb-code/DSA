#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int target = 30;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Element found at index " << i << endl;
            return 0;
        }
    }

    cout << "Element not found" << endl;

    return 0;
}
