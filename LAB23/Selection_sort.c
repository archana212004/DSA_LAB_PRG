#include <stdio.h>

void selection_sort(int n, int arr[]) {
    for(int i = 0; i < n - 1; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void main() {
    int n, key;
    printf("Enter size:\n");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the array elem:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    selection_sort(n, arr);
    printf("sorted array :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
} 