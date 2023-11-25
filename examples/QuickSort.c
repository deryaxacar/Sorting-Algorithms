#include <stdio.h>

// Pivot elemanını belirleyen yardımcı fonksiyon
int partition(int arr[], int low, int high) 
{
    int pivot = arr[high]; // Pivot'u sağdaki son eleman olarak seçiyoruz
    int i = low - 1; // Index of smaller element

    for (int j = low; j <= high - 1; j++) 
    {
        // Eğer şu anki eleman pivot'tan küçükse, swap işlemi yap
        if (arr[j] < pivot) 
	{
            i++;
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }

    // Pivot'u uygun yere yerleştir ve bu pozisyonu geri döndür
    int tmp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = tmp;
    return i + 1;
}

// Quicksort algoritması
void quickSort(int arr[], int low, int high) 
{
    if (low < high) 
    {
        // Dizi parçalama ve pivot'un doğru pozisyona yerleştirilmesi
        int pi = partition(arr, low, high);

        // Her iki tarafı da ayrı ayrı sırala
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// örnek kullanım
int main() 
{
    int Array[] = {64, 25, 12, 22, 11};
    int n = sizeof(Array) / sizeof(Array[0]);

	printf("önce: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", Array[i]);
    }
    printf("\n");
    quickSort(Array, 0, n - 1);

    printf("sonra: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", Array[i]);
    }

    return 0;
}
