#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int aux[n];
    
    for (int i = 0; i < n; i++) {
        aux[i] = arr[n - 1 - i];
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", aux[i]);
    }
    
    return 0;
}