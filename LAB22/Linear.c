#include <stdio.h>

int linearsearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, key;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter array elem %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    int result = linearsearch(arr, n, key);

    if (result != -1) {
        printf("Your key is at index: %d\n", result);
    } else {
        printf("Key not found in the array.\n");
    }

    return 0;
}
