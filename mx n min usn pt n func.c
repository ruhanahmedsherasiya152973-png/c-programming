//find out maximum and minimum of n numbers using pointer and functions
#include <stdio.h>
void findMaxMin(int *arr, int n, int *max, int *min) {
    *max = *min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[100];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max, min;
    findMaxMin(arr, n, &max, &min);
    
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    
    return 0;
}