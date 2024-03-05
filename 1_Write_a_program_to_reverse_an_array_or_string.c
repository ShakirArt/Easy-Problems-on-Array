#include<stdio.h>
#define n 13

int main() {
    char name[n] = "ABC abc", name2[n];
    int i, j=n-1;
    for(i=0; i<n; i++){
        name2[j] = name[i];
        j--;
    }
    printf("Array: ");
    for(i=0; i<n; i++){
        printf("%c", name[i]);
    }
    printf("\nReverse: ");
    for(i=0; i<n; i++){
        printf("%c", name2[i]);
    }
    return 0;
}
