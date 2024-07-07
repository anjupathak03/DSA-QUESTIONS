#include <iostream>
#include <algorithm>
#include <climits>
#include <string> // Include <string> header for std::string
using namespace std;

void convertToMinutes(string arr[], int ans[], int size) {
    for (int i = 0; i < size; i++) {
        int hours = stoi(arr[i].substr(0, 2));
        int mins = stoi(arr[i].substr(3, 2));
        int totalMins = hours * 60 + mins;
        ans[i] = totalMins;
    }
    sort(ans, ans + size);
}

int findMinDiff(int ans[], int size) {
    int minDiff = INT_MAX;
    for (int i = 0; i < size - 1; i++) {
        int diff = ans[i + 1] - ans[i];
        if (diff < minDiff) {
            minDiff = diff;
        }
    }
    // Check the difference between the last and the first time across midnight
    int lastDiff = (ans[0] + 1440) - ans[size - 1];
    if (lastDiff < minDiff) {
        minDiff = lastDiff;
    }
    return minDiff;
}

int main() {
    string arr[] = {"12:10", "10:15", "13:15", "17:20", "18:00", "19:47", "23:59"};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int ans[size]; // Declare ans array to store minutes

    convertToMinutes(arr, ans, size);
    int minDiff = findMinDiff(ans, size);

    cout << minDiff << " is the minimum difference in minutes" << endl;

    return 0;
}
