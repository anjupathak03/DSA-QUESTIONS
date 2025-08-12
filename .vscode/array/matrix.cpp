#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> dothequestion(int arr[], int l, int u, int n) {
    vector<pair<int, int>> ans;

    // If there's a gap before the first element
    if (l < arr[0]) {
        ans.push_back({l, arr[0] - 1});
    }

    // Checking missing ranges between elements
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] + 1 < arr[i]) {
            ans.push_back({arr[i - 1] + 1, arr[i] - 1});
        }
    }

    // If there's a gap after the last element
    if (arr[n - 1] < u) {
        ans.push_back({arr[n - 1] + 1, u});
    }

    return ans;
}

int main() {
    int l = 3, u = 90, n = 5;
    int arr[5] = {7, 22, 50, 66, 78}; // Sorted array

    vector<pair<int, int>> sans = dothequestion(arr, l, u, n);

    for (auto i : sans) {
        cout << i.first << "," << i.second << endl;
    }

    return 0;
}
