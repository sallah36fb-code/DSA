#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


// BRUTE FORCE
// Time: O(N^2)
// Space: O(1)

int singleNumberBrute(vector<int>& arr) {

    for (int i = 0; i < arr.size(); i++) {
        int count = 0;

        for (int j = 0; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count == 1) {
            return arr[i];
        }
    }
    return -1;
}


// BETTER
// Time: O(N) average
// Space: O(N)

int singleNumberBetter(vector<int>& arr) {
    unordered_map<int, int> freq;

    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < arr.size(); i++) {
        if (freq[arr[i]] == 1) {
            return arr[i];
        }
    }
    return -1;
}


// OPTIMAL
// Time: O(N)
// Space: O(1)

int singleNumberOptimal(vector<int>& arr) {
    int ans = 0;

    for (int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}


// MAIN

int main() {

    vector<int> arr = {4, 1, 2, 1, 2};

    cout << "Brute Force: "
         << singleNumberBrute(arr) << endl;

    cout << "Better: "
         << singleNumberBetter(arr) << endl;

    cout << "Optimal: "
         << singleNumberOptimal(arr) << endl;

    return 0;
}
