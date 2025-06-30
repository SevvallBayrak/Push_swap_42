# 🔁 push_swap - Minimum Hamleyle Sıralama

`push_swap`, sana verilen karışık sayı listesini yalnızca belirli kurallara göre çalışan **iki stack (yığın)** kullanarak **en az sayıda hamleyle sıralamayı** hedefleyen bir algoritma projesidir. 

---

## 🎯 Projenin Amacı

- İki stack (`stack_a`, `stack_b`) ve sınırlı sayıda işlem ile sıralama yapmak.
- En az sayıda hareket ile listeyi küçükten büyüğe sıralamak.
- Sıralama işlemi sırasında sadece belirli komutlar kullanılabilir (ör. `sa`, `pb`, `ra`...).

---

## ⚙️ Kullanılabilir Komutlar

| Komut | Açıklama                            |
|-------|-------------------------------------|
| `sa`  | `stack_a`'da ilk iki elemanı takas eder |
| `sb`  | `stack_b`'da ilk iki elemanı takas eder |
| `ss`  | `sa` ve `sb` aynı anda               |
| `pa`  | `stack_b`'nin ilk elemanını `stack_a`'ya push eder |
| `pb`  | `stack_a`'nın ilk elemanını `stack_b`'ye push eder |
| `ra`  | `stack_a`'yı yukarı kaydırır         |
| `rb`  | `stack_b`'yi yukarı kaydırır         |
| `rr`  | `ra` ve `rb` aynı anda               |
| `rra` | `stack_a`'yı aşağı kaydırır          |
| `rrb` | `stack_b`'yi aşağı kaydırır          |
| `rrr` | `rra` ve `rrb` aynı anda             |

---

## 🧠 Neler Öğrendim?

### 📌 Stack Veri Yapısı
- `LIFO` mantığıyla çalışan **stack (yığın)** yapısını hem teorik hem pratik olarak öğrendim.
- İki yığın arasında veri taşıma, döndürme ve takas işlemlerini modelledim.

### 🔍 Sıralama Algoritmaları ve Kıyaslama
- Küçük veri setleri için **insertion sort** gibi basit algoritmalar
- Büyük veri setleri için **radix sort** gibi daha verimli algoritmalar uyguladım.
- Algoritmaların zaman karmaşıklığını (`O(n)`, `O(n log n)`) detaylı analiz ettim.

### ♟️ Heuristik Yaklaşımlar
- Minimum hamle sayısını hedefleyerek **heuristic algoritmalar** geliştirdim.
- Optimal çözüm ararken **kendi sorting stratejilerimi** oluşturdum.

---

## 🔬 Örnek Kullanım

```bash
$> ./push_swap 3 2 1
sa
rra
