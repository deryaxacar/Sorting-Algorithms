#include <stdio.h>

void merge(int arr[], int left, int mid, int right) 
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Geçici alt diziler oluştur
    int Left[n1], Right[n2];

    // Geçici alt dizilere verileri kopyala
    for (i = 0; i < n1; i++)
        Left[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        Right[j] = arr[mid + 1 + j];

    // Geçici alt dizileri birleştirerek sıralı diziyi oluştur
    i = 0; // İlk alt dizi için indeks
    j = 0; // İkinci alt dizi için indeks
    k = left; // Birleştirilmiş dizideki indeks
    while (i < n1 && j < n2) 
    {
        if (Left[i] <= Right[j]) 
	{
            arr[k] = Left[i];
            i++;
        } 
	else 
	{
            arr[k] = Right[j];
            j++;
        }
        k++;
    }

    // Kalan elemanları kopyala (eğer varsa)
    while (i < n1) 
    {
        arr[k] = Left[i];
        i++;
        k++;
    }

    while (j < n2) 
    {
        arr[k] = Right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) 
{
    if (left < right) 
    {
        // Diziyi ikiye böl
        int mid = left + (right - left) / 2;

        // Her iki yarıyı da sırala
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Sıralı yarıları birleştir
        merge(arr, left, mid, right);
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
    mergeSort(Array, 0, n - 1);
    printf("sonra: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", Array[i]);
    }

    return 0;
}
