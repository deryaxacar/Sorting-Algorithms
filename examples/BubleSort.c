#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) 
		{
            if (arr[j] > arr[j+1]) 
			{
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

int main() {
    int n;

    printf("Dizi boyutunu girin: ");
    scanf("%d", &n);

    int Array[n];

    printf("Dizinin elemanlarını girin:\n");
    for (int i = 0; i < n; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &Array[i]);
    }

	printf("önce: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", Array[i]);
    }
    printf("\n");
    
    bubbleSort(Array, n);

    printf("sonra: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", Array[i]);
    }

    return 0;
}