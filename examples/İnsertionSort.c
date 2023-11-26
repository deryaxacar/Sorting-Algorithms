#include <stdio.h>

void insertionSort(int arr[], int n) 
{
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;

        // Sıralı bölümdeki elemanları karşılaştır ve yer değiştir
        while (j >= 0 && arr[j] > key) 
	{
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() 
{
    int n;

    printf("Dizi boyutunu girin: ");
    scanf("%d", &n);

    int Array[n];

    printf("Dizinin elemanlarını girin:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &Array[i]);
    }

    printf("önce: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", Array[i]);
    }
    printf("\n");
    
    insertionSort(Array, n);

    printf("sonra: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", Array[i]);
    }
    printf("\n");

    return 0;
}
