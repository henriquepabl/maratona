#include <stdio.h>


void bubbleSort(long int arr[], int n) {
    int i, j;
    long int temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int size = 2 * n;
        long int a[size];

        for (int i = 0; i < size; i++) {
            scanf("%ld", &a[i]);
        }
        
        bubbleSort(a, size);
        long long soma = 0;
        for (int i = 0; i < size; i += 2) {
            soma += a[i];
        }
        printf("%lld\n", soma);
    }

    return 0;
}
