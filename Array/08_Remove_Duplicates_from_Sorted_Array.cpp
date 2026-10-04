#include <iostream>
#include <vector>
#include <set>
using namespace std;

// BRUTE FORCE
// Time: O(N log N)
// Space: O(N)

int removeDuplicatesBrute(vector<int>& arr) {
    set<int> st;

    for (int x : arr) {
        st.insert(x);
    }

    int index = 0;

    for (int x : st) {
        arr[index] = x;
        index++;
    }
    return index;
}


// BETTER
// Time: O(N)
// Space: O(N)

int removeDuplicatesBetter(vector<int>& arr) {
    vector<int> temp;

    for (int i = 0; i < arr.size(); i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            temp.push_back(arr[i]);
        }
    }

    for (int i = 0; i < temp.size(); i++) {
        arr[i] = temp[i];
    }
    return temp.size();
}


// OPTIMAL
// Time: O(N)
// Space: O(1)

int removeDuplicatesOptimal(vector<int>& arr) {

    if (arr.empty())
        return 0;
    int i = 0;

    for (int j = 1; j < arr.size(); j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

// MAIN FUNCTION
int main() {

    vector<int> arr = {1, 1, 2, 2, 2, 3, 3, 4, 5, 5};

    // BRUTE ----------------
    vector<int> a1 = arr;
    int k1 = removeDuplicatesBrute(a1);

    cout << "Brute Force:" << endl;
    cout << "Unique Elements: ";

    for (int i = 0; i < k1; i++) {
        cout << a1[i] << " ";
    }

    cout << endl;
    cout << "k = " << k1 << endl << endl;


    // BETTER ----------------
    vector<int> a2 = arr;
    int k2 = removeDuplicatesBetter(a2);

    cout << "Better:" << endl;
    cout << "Unique Elements: ";

    for (int i = 0; i < k2; i++) {
        cout << a2[i] << " ";
    }

    cout << endl;
    cout << "k = " << k2 << endl << endl;


    // OPTIMAL ----------------
    vector<int> a3 = arr;
    int k3 = removeDuplicatesOptimal(a3);

    cout << "Optimal:" << endl;
    cout << "Unique Elements: ";

    for (int i = 0; i < k3; i++) {
        cout << a3[i] << " ";
    }

    cout << endl;
    cout << "k = " << k3 << endl;

    return 0;
}
