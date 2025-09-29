//.Q: Rotate an array to the right by k positions.
#include <stdio.h>
int main() {
    int n, i, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate (k): ");
    scanf("%d", &k);
    k = k % n; 
    int rotated[n];
    for (i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    printf("Array after rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");
    return 0;
}