include <stdio#.h>

// Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Hoan doi hai phan tu
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {78, 29, 15, 46, 22, 80, 99};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    
    printf("Mang truoc khi sap xep: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    bubbleSort(arr, n);
    
    printf("\nMang sau khi sap xep (Bubble Sort): \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}
