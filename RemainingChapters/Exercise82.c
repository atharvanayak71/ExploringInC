// Atharva Nayak
// 0905CS241063
#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;
    int pos = binarySearch(arr, 0, n - 1, key);
    if (pos != -1)
        printf("Element %d found at index %d\n", key, pos);
    else
        printf("Element %d not found\n", key);
    return 0;
}
