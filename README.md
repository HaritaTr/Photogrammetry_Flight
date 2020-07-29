 # **Fotogrametrik Uçuş Planının Hazırlanması**

**Amaç**
========
Hava fotoğrafçılığının ana görevi arazinin doğal ve doğal olmayan yüzeyinin üç boyutlu belirlenmesinin sağlanmasıdır. Stereofotogrametri için koşul, arazi yüzeyindeki her noktanın en az iki resimde izdüşümün olmasıdır. Resimlerin bir şerit içerisinde en az %50 oranında  örtü oranına sahip olmaları durumunda bu koşul sağlanır. Tek resim fotogrametrisinde ise yer yüzeyinin her noktasının yalnızca bir resimde izdüşümünün olması yeterlidir. Stereofotogrametri de karesel formatta resim çekme makineleri söz konusudur. Haritalanacak bölge üzerinde paralel şeritler ile uçulur.

**Bu yazılım hava fotogrametrisindeki geometrik bağıntıların hesaplanmasında, yardımcı olmak amaçlı kullanılabilir.**

**Yazılım Kullanım Rehberi;**
=============================

**Kullanımı çok basittir.** Yazılımı çalıştırdığınız zaman;

+ Mk; Harita Ölçeği
+ C; Sabit değer
- [ ] Resim Ölçeğinin hesaplanmasında bilinmesi gereken “C” sabit değerler;
- [ ] Büyük incelik (presizyon) isteyen işlerde C=100,
- [ ] Yol projeleri detay çalışmalarında C=125,
- [ ] Mühendislik yapılarında detay planlamasında C=150,
- [ ] Grafik kadastro çalışmalarında C=175,
- [ ] Genel haritalama işlemlerinde C=200,
- [ ] Planlama amaçlı işlerde C=225
- [ ] olarak alınır.
+ f; Odak noktası
+ p; Enine Örtü oranı
+ q; Boyuna Örtü oranı
+ S; Karesel  Formatta Resim kenarı
+ Lq; Arazi genişliği
+ Lp; Uçuş Şeridi uzunluğu
+ V; Uçağın hızı
+ E; Uçağın Manevra kabiliyeti (Şeritler arası dönüş uzaklığı)

- [ ] Yukarıdaki değerlerin girilmesi gerekmektedir. 
Değerler girildikten sonra geri kalanı hesaplanır. :)

 **Hesaplanan;**
 ---------------

+ Resim ölçeği (Mr)
+ Şerit eksenleri arasındaki uzunluk (A)
+ Uçuş bazı (B)
+ Uçuş yüksekliği (H)
+ Resim kenarının yeryüzündeki karşılığı (s)
+ Şerit sayısı (n)
+ Her bir şeritteki resim sayısı (N)
+ Tüm bloktaki resim sayısı (T)
+ Toplam uçuş süresi (Ttop)
+ İki resim çekimi arasındaki süre (t)
+ Yerde kaplanan alan (ss)
+ Bir modelin kapladığı alan (Fm)
+ Yeni kazanılan stereoskobik alan (Fn)
