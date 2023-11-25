#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min, tmp;
    
    for (i = 0; i < n-1; i++) {
        // Minimum elemanın indeksini bulma
        min = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        
        // Minimum elemanı bulunan yerle değiştirme
        tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
}

// Örnek kullanım
int main() {
    int Array[] = {64, 25, 12, 22, 11};
    int n = sizeof(Array) / sizeof(Array[0]);
    
    printf("önce: ");
     for (int i = 0; i < n; i++) {
        printf("%d ", Array[i]);
    }
    printf("\n");
    selectionSort(Array, n);
    printf("Sonra: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", Array[i]);
    }
    
    return 0;
}
