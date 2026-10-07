#include <iostream>
#include <vector>
using namespace std;

// BRUTE FORCE
// Time: O(N^2)
// Space: O(1)
int maxConsecutiveOnesBrute(vector<int>& arr) {

    int maxCount = 0;

    for (int i = 0; i < arr.size(); i++) {

        int count = 0;

        for (int j = i; j < arr.size(); j++) {

            if (arr[j] == 1) {
                count++;
                maxCount = max(maxCount, count);
            }
            else {
                break;
            }
        }
    }

    return maxCount;
}


// OPTIMAL
// Time: O(N)
// Space: O(1)
int maxConsecutiveOnesOptimal(vector<int>& arr) {

    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < arr.size(); i++) {

        if (arr[i] == 1) {
            count++;
        }
        else {
            count = 0;
        }

        maxCount = max(maxCount, count);
    }

    return maxCount;
}


// MAIN
int main() {

    vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1};

    cout << "Brute Force: "
         << maxConsecutiveOnesBrute(arr) << endl;

    cout << "Optimal: "
         << maxConsecutiveOnesOptimal(arr) << endl;

    return 0;
}
