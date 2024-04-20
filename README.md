# Sıralama Algoritmaları - C

Bu depo, çeşitli sıralama algoritmalarının C dilinde uygulanmış halini içerir.

## Algoritmalar

Şu anda bu depoda aşağıdaki sıralama algoritmaları bulunmaktadır:

1. **Bubble Sort**:
   - Bu algoritma, birbirini takip eden iki elemanı karşılaştırarak, gerektiğinde yer değiştirerek sıralama yapar. Yani, listedeki her elemanı yanındaki elemanla karşılaştırır ve gerektiğinde yer değiştirir. Bu işlem, listenin sonuna kadar devam eder ve en büyük eleman en sona yerleşir. Ardından, bu işlem liste üzerinde tekrarlanarak sıralama tamamlanır.

3. **Insertion Sort**:
   - Bu algoritma, elemanları sıralı ve sırasız olarak iki kısma böler ve sıralı kısmın içine yerleştirir. Listenin ikinci elemanından başlayarak, her elemanı sıralı kısmın içindeki uygun konuma yerleştirir. Bu işlem, listenin son elemanına kadar devam eder ve listenin tamamı sıralanmış olur.

5. **Selection Sort**:
   - Bu algoritma, dizideki en küçük (veya en büyük) elemanı bulup, dizinin başına (veya sonuna) yerleştirerek sıralama yapar. Listenin her bir elemanı için en küçük (veya en büyük) elemanı bulur ve bu elemanı listenin başına (veya sonuna) yerleştirir. Bu işlem, listenin tamamı sıralanana kadar devam eder.

7. **Merge Sort**:
   - Bu algoritma, diziyi ikiye bölerek her bir parçayı ayrı ayrı sıralar, ardından birleştirerek sıralı bir dizi elde eder. Listenin ortası bulunarak ikiye bölünür, ardından her bir parça için merge sort algoritması uygulanır. Son olarak, birleştirme işlemiyle sıralı diziler birleştirilir.

9. **Quick Sort**:
    - Bu algoritma, bir pivot eleman seçerek diziyi pivot elemanın solunda küçük, sağında büyük olacak şekilde bölüp sıralama yapar. İlk olarak bir pivot eleman seçilir, daha sonra dizideki diğer elemanlar pivot elemanın sağında veya solunda olacak şekilde bölünür. Bu işlem rekürsif olarak tekrarlanır ve sonunda tüm dizinin sıralı olduğu garanti edilir.

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
