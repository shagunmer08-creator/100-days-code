//.Q: Find the second largest element in an array.
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int first, second;
    first = second = -2147483648; 
    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == -2147483648) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }
    return 0;
}