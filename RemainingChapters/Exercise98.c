// Atharva Nayak
// 0905CS241063
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int *ptr = arr;
    printf("Array elements using pointer:\n");
    for (int i = 0; i < n; i++)
        printf("arr[%d] = %d  (address: %p)\n", i, *(ptr + i), (void *)(ptr + i));
    return 0;
}
