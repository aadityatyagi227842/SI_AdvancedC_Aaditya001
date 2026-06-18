#include <stdio.h>
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the pointers inward
        start++;
        end--;
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nOriginal Array: ");
    printArray(arr, size);
    reverseArray(arr, size);
    printf("Reversed Array: ");
    printArray(arr, size);
    return 0;
}
