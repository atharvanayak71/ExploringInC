// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) { printf("Memory allocation failed\n"); return 1; }
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    long long sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    printf("Sum = %lld\nAverage = %.2f\n", sum, (double)sum / n);
    free(arr);
    return 0;
}
