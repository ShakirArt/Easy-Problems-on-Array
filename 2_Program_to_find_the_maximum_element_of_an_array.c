#include <stdio.h>

int main () {
    int arr[5] = {5, 8, 0, 3, 9};
    int large, i;
    large = arr[0];
    for(i=0; i<5; i++)  {
        if(large<arr[i]) {
            large = arr[i];
        }
    }
    printf("Array: ");
    for(i=0; i<5; i++){
        printf("%d  ", arr[i]);
    }
    printf("\nMaximum element: %d\n", large);
    return 0;
}

