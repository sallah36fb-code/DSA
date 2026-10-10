
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// BRUTE FORCE
// Time: O(N^2)
// Space: O(1)

vector<int> twoSumBrute(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
      
        for (int j = i + 1; j < arr.size(); j++) {

            if (arr[i] + arr[j] == target) {
                return {i, j};
            }
        }
    }

    return {};
}


// BETTER
// Time: O(N) average
// Space: O(N)

vector<int> twoSumBetter(vector<int>& arr, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++) {
        int needed = target - arr[i];

        if (mp.find(needed) != mp.end()) {
            return {mp[needed], i};
        }

        mp[arr[i]] = i;
    }

    return {};
}


// OPTIMAL
// Time: O(N) average
// Space: O(N)

vector<int> twoSumOptimal(vector<int>& arr, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++) {
       int needed = target - arr[i];

        if (mp.find(needed) != mp.end()) {
            return {mp[needed], i};
        }

        mp[arr[i]] = i;
    }

    return {};
}


// MAIN
int main() {

    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans1 = twoSumBrute(arr, target);
    vector<int> ans2 = twoSumBetter(arr, target);
    vector<int> ans3 = twoSumOptimal(arr, target);

    cout << "Brute Force: ";
    cout << "[" << ans1[0] << ", " << ans1[1] << "]" << endl;

    cout << "Better: ";
    cout << "[" << ans2[0] << ", " << ans2[1] << "]" << endl;

    cout << "Optimal: ";
    cout << "[" << ans3[0] << ", " << ans3[1] << "]" << endl;

    return 0;
}
