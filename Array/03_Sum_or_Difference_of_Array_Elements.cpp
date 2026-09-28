#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    int sum = 0;
    int difference = arr[0];

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    for (int i = 1; i < n; i++) {
        difference -= arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Difference = " << difference << endl;
    return 0;
}
