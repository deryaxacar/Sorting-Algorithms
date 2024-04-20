# Sıralama Algoritmaları - C

Bu depo, çeşitli sıralama algoritmalarının C dilinde uygulanmış halini içerir.

## Algoritmalar

Şu anda bu depoda aşağıdaki sıralama algoritmaları bulunmaktadır:

1. **Bubble Sort**: Birbirini takip eden iki elemanı karşılaştırarak, gerektiğinde yer değiştirerek sıralama yapar.
2. **Insertion Sort**: Elemanları sıralı ve sırasız olarak iki kısma böler ve sıralı kısmın içine yerleştirir.
3. **Selection Sort**: Dizideki en küçük (veya en büyük) elemanı bulup, dizinin başına (veya sonuna) yerleştirerek sıralama yapar.
4. **Merge Sort**: Diziyi ikiye bölerek her bir parçayı ayrı ayrı sıralar, ardından birleştirerek sıralı bir dizi elde eder.
5. **Quick Sort**: Bir pivot eleman seçerek diziyi pivot elemanın solunda küçük, sağında büyük olacak şekilde bölüp sıralama yapar.

## Performans Karşılaştırması

Her bir algoritmanın performansını karşılaştırmak için aşağıdaki tabloyu kullanabilirsiniz:

| Algoritma       | En İyi Zaman Karmaşıklığı | Ortalama Zaman Karmaşıklığı | En Kötü Zaman Karmaşıklığı | Ekstra Bellek Kullanımı | Kararlılık  |
|-----------------|----------------------------|------------------------------|----------------------------|-------------------------|--------------|
| Bubble Sort     | O(n)                       | O(n^2)                       | O(n^2)                     | O(1)                    | Evet         |
| Insertion Sort  | O(n)                       | O(n^2)                       | O(n^2)                     | O(1)                    | Evet         |
| Selection Sort  | O(n^2)                     | O(n^2)                       | O(n^2)                     | O(1)                    | Hayır        |
| Merge Sort      | O(n log n)                 | O(n log n)                   | O(n log n)                 | O(n)                    | Evet         |
| Quick Sort      | O(n log n)                 | O(n log n)                   | O(n^2)                     | O(log n)                | Genellikle   |


## Nasıl Kullanılır

Her bir sıralama algoritması kendi C dosyasına sahiptir. Algoritmayı kullanmak için ilgili dosyayı derleyip çalıştırabilirsiniz.

Örnek kullanım:

```bash
gcc bubble_sort.c -o bubble_sort
./bubble_sort
