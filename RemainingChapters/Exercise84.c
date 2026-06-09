// Atharva Nayak
// 0905CS241063
#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIdx]) minIdx = j;
        int t = arr[minIdx]; arr[minIdx] = arr[i]; arr[i] = t;
    }
}

int main() {
    int arr[] = {29, 10, 14, 37, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Before: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    selectionSort(arr, n);
    printf("\nAfter:  ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
