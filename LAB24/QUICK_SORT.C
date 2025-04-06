#include <stdio.h>

void quick_sort(int K[], int LB, int UB) {
    int I, J, KEY, FLAG, temp;
    if (LB < UB) {
        I = LB;
        J = UB + 1;
        KEY = K[LB];
        FLAG = 1;

        while (FLAG) {
            I++;
            while (K[I] < KEY)
                I++;
            J--;
            while (K[J] > KEY)
                J--;
            if (I < J) {
                temp = K[I];
                K[I] = K[J];
                K[J] = temp;
            } else
                FLAG = 0;
        }
        temp = K[LB];
        K[LB] = K[J];
        K[J] = temp;

        quick_sort(K, LB, J - 1);
        quick_sort(K, J + 1, UB);
    }
}

int main() {
    int N, i;
    printf("Enter array size: ");
    scanf("%d", &N);

    int K[N];
    printf("Enter %d elements: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &K[i]);

    quick_sort(K, 0, N - 1);

    printf("Sorted array: ");
    for (i = 0; i < N; i++)
        printf("%d ", K[i]);

    return 0;
}
