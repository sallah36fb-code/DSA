
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// BRUTE FORCE
// Time: O(N^2)
// Space: O(1) auxiliary space (excluding output)
vector<int> leadersBrute(vector<int>& arr) {

    vector<int> leaders;
    int n = arr.size();

    for (int i = 0; i < n; i++) {

        bool isLeader = true;

        for (int j = i + 1; j < n; j++) {

            if (arr[j] > arr[i]) {
                isLeader = false;
                break;
            }
        }

        if (isLeader) {
            leaders.push_back(arr[i]);
        }
    }

    return leaders;
}


// OPTIMAL
// Time: O(N)
// Space: O(1) auxiliary space (excluding output)
vector<int> leadersOptimal(vector<int>& arr) {

    vector<int> leaders;
    int n = arr.size();

    int maxRight = arr[n - 1];

    leaders.push_back(maxRight);

    for (int i = n - 2; i >= 0; i--) {

        if (arr[i] >= maxRight) {
            leaders.push_back(arr[i]);
            maxRight = arr[i];
        }
    }

    reverse(leaders.begin(), leaders.end());

    return leaders;
}


// MAIN
int main() {

    vector<int> arr = {10, 22, 12, 3, 0, 6};

    vector<int> brute = leadersBrute(arr);
    vector<int> optimal = leadersOptimal(arr);

    cout << "Brute Force Leaders: ";
    for (int x : brute) {
        cout << x << " ";
    }

    cout << endl;

    cout << "Optimal Leaders: ";
    for (int x : optimal) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
