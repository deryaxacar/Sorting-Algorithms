#include <stdio.h>

void selectionSort(int arr[], int n) 
{
    int i, j, min, tmp;
    
    for (i = 0; i < n-1; i++) 
    {
        // Minimum elemanın indeksini bulma
        min = i;
        for (j = i+1; j < n; j++) 
        {
            if (arr[j] < arr[min]) 
                min = j;
        }
        
        // Minimum elemanı bulunan yerle değiştirme
        tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
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

    printf("Önce: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", Array[i]);
    }
    printf("\n");

    selectionSort(Array, n);

    printf("Sonra: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", Array[i]);
    }
    printf("\n");

    return 0;
}
