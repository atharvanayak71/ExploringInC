// Atharva Nayak
// 0905CS241063
#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key) return i;
    return -1;
}

int main() {
    int arr[] = {4, 7, 2, 9, 1, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 9;
    int pos = linearSearch(arr, n, key);
    if (pos != -1)
        printf("Element %d found at index %d\n", key, pos);
    else
        printf("Element %d not found\n", key);
    return 0;
}
