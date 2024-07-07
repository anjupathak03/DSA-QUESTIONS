#include<iostream>
using namespace std;

int occ(int arr[], int size) {
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) {  // Changed from s < e to s <= e to include the last element
        mid = s + (e - s) / 2;  // Ensure mid is recalculated inside the loop
        
        if (arr[mid] % 2 == 0) {
            if (mid + 1 < size && arr[mid] == arr[mid + 1]) {  // Check boundary
                s = mid + 2;
            } else if (mid - 1 >= 0 && arr[mid - 1] == arr[mid]) {  // Check boundary
                e = mid - 2;
            } else {
                ans = mid;
                break;
            }
        } else if (arr[mid] % 2 != 0) {
            if (mid + 1 < size && arr[mid] != arr[mid + 1]) {  // Check boundary
                s = mid + 1;
                ans = mid + 1;
                break;
            } else {
                e = mid - 1;
            }
        }
    }
    return ans;
}

int main() {
    int arr[13] = {3, 3, 4, 4, 5, 1, 1, 2, 2, 9, 9, 3, 3};
    int size = 13;
    int oddocc = occ(arr, size);
    if (oddocc != -1) {
        cout << "Element with odd occurrences: " << arr[oddocc] << " at index " << oddocc;
    } else {
        cout << "No element with odd occurrences found";
    }
    return 0;
}
