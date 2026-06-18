#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int size,i,pos;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    printf("Enter %d elements in the array:\n", size);
    for (i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
     printf("Enter the element position to delete (1 to %d): ", size);
    scanf("%d", &pos);
     if (pos < 1 || pos > size) {
        printf("Invalid position! Deletion is not possible.\n");
    }
     else
    {
        // Shift elements from (pos-1) to the left
        for(i=pos-1;i<size-1;i++) {
            arr[i]=arr[i+1];
        }
        size--;
        printf("Array elements after deletion:\n");
        for(i=0;i<size;i++) {
            printf("%d",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
