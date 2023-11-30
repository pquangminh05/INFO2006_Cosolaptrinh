#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Hoan doi hai phan tu 
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}
int main() {
    int arr[] = {65, 23, 8, 14, 28, 73, 92};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    
    printf("Mang truoc khi sap xep: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    selectionSort(arr, n);
    
    printf("\nMang sau khi sap xep (Selection Sort): \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

