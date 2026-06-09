// Atharva Nayak
// 0905CS241063
#include <stdio.h>

void countSort(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] > max) max = arr[i];
    int count[max + 1];
    for (int i = 0; i <= max; i++) count[i] = 0;
    for (int i = 0; i < n; i++) count[arr[i]]++;
    int idx = 0;
    for (int i = 0; i <= max; i++)
        while (count[i]--) arr[idx++] = i;
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = 7;
    printf("Before: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    countSort(arr, n);
    printf("\nAfter:  ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
