#include <stdio.h>

int main() {
    int arr[] = {58, 24, 13, 15, 63, 9, 8, 81, 1, 78};
    int n = sizeof(arr)/sizeof(arr[0]);
    int half = n / 2;
    int arr1[half], arr2[n - half];
    
    for (int i = 0; i < half; i++) {
        arr1[i] = arr[i];
    }
    
    for (int i = 0; i < n - half; i++) {
        arr2[i] = arr[half + i];
    }
    
    for (int i = 0; i < half; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    
    for (int i = 0; i < n - half; i++) {
        printf("%d ", arr2[i]);
    }
    
    return 0;
}