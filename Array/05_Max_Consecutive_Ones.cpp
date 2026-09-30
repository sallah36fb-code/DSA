#include <iostream>
using namespace std;

int maxConsecutiveOnes(int arr[], int n) {
    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
            maxCount = max(maxCount, count);
        }
        else {
            count = 0;
        }
    }

    return maxCount;
}

int main() {
    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Consecutive Ones: "
         << maxConsecutiveOnes(arr, n) << endl;

    return 0;
}
