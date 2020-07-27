#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int Mk, C, f, p, q, S, Lp, Lq, V, E;
	int Mr, A, B, H, s, n, N, T, Ttop, t, ss, Fm, Fn;
	
		// İlk önce bilinenleri isteyelim.
	// Mk; Harita ölçeği'ni isteyelim.
	printf("Harita Ölçeği (Mk) değerini giriniz: ", Mk);
	scanf("%d", &Mk);
	// C; Sabit değer'ini isteyelim.
	printf("C sabit değerini giriniz: ", C);
	scanf("%d", &C);
	// f; Odak noktası
	printf("Odak noktası (f) santimetre(cm) değerini giriniz: ", f);
	scanf("%d", &f);
	// p; Enine örtü oranı
	printf("Enine örtü oranı (p) değerini giriniz: ", p);
	scanf("%d", &p);
	// q; Boyuna örtü oranı
	printf("Boyuna örtü oranı (q) değerini giriniz: ", q);
	scanf("%d", &q);
	// S; Karesel  formatta resim kenarı
	printf("Karesel formatta resim kenarı (S) santimetre(cm) değerini giriniz: ", S);
	scanf("%d", &S);
	// Lq; Arazi genişliği
	printf("Arazi genişliği (Lq) kilometre(km) değerini giriniz: ", Lq);
	scanf("%d", &Lq);
	// Lp; Uçuş şeridi uzunluğu
	printf("Uçuş şeridi uzunluğu (Lp) kilometre(km) değerini giriniz: ", Lp);
	scanf("%d", &Lp);
	// V; Uçağın hızı
	printf("Uçağın hızı (V) kilometre/saat(km/h) değerini giriniz: ", V);
	scanf("%d", &V);
	// E; Uçağın manevra kabiliyeti (Şeritler arası dönüş uzaklığı)
	printf("Uçağın manevra kabiliyetini (E) kilometre(km) değerini giriniz: ", E);
	scanf("%d", &E);

	printf("\n===== Hesaplananlar!!! =====\n");
		// 2- Bilinmeyenlerin Hesaplanması;
	/* 2.1 Resim ölçeğinin hesaplanması
	Mr = C *(Mk); */
	Mr = C * (Mk);
	printf("\nResim ölçeği (Mr) değeri: %d\n", Mr);
	/* 2.2 Şerit eksenleri arasındaki uzunluğun hesaplanması
	A = Mr * (1 – (q / 100)) * (S / 100); */
	A = Mr * (1 - (q / 100)) * (S / 100);
	printf("Şerit eksenleri arasındaki uzunluk (A) metre(m) değeri: %d\n", A);
	/* 2.3 Uçuş bazının hesaplanması
	B = Mr * (1 – (p / 100)) * (S / 100); */
	B = Mr * (1 - (p / 100)) * (S / 100);
	printf("Uçuş bazı (B) metre(m) değeri: %d\n", B);
	/* 2.4 Uçuş yüksekliğinin hesaplanması
 	H = (f / 100) * Mr; */
	H = (f / 100) * Mr;
	printf("Uçuş yüksekliği (H) metre(m) değeri: %d\n", H);
	/* 2.5 Resim kenarının yeryüzündeki karşılığının hesaplanması
 	s = (S / 100) * Mr; */
	s = (S / 100) * Mr;
	printf("Resim kenarının yeryüzündeki karşılığı (s) metre(m) değeri: %d\n", s);
	/* 2.6 Şerit sayısının hesaplanması
 	n = (((Lq * 1000) – s) / A) + 1; */
	n = (((Lq * 1000) - s) / A) + 1;
	printf("Şerit sayısı (n) adet değeri: %d\n", n);
	/* 2.7 Her bir şeritteki resim sayısının hesaplanması
 	N = ((Lp * 1000) / B) + 4; */
	N = ((Lp * 1000) / B) + 4;
	printf("Her bir şeritteki resim sayısı (N) adet değeri: %d\n", N);
	/* 2.8 Tüm Bloktaki resim sayısının hesaplanması
	T = n * N; */
	T = n * N;
	printf("Tüm bloktaki resim sayısı (T) adet değeri: %d\n", T);
	/* 2.9 Toplam uçuş süresinin hesaplanması
	Ttop = ((n * Lp) + (n – 1) * E) / V; */
	Ttop = ((n * Lp) + (n - 1) * E) / V;
	printf("Toplam uçuş süresi (Ttop) saniye(sn) değeri: %d\n", Ttop);
	/* 2.10 İki resim çekimi arasındaki sürenin hesaplanması (km/h'i m/sn çevirmek için 1000/3600 ile çarparız.)
 	t = (B / ((V * 1000 ) / 3600)); */
 	t = (B / ((V * 1000 ) / 3600));
	printf("İki resim çekimi arasındaki süre (t) saniye(sn) değeri: %d\n", t);
	/* 2.11 Yerde kaplanan alanın hesaplanması
 	ss = ((s / 1000) ^ 2); */
	ss = pow((s / 1000), 2);
	printf("Yerde kaplanan alan (ss) kilometre kare(km^2) değeri: %d\n", ss);
	/* 2.12 Bir modelin kapladığı alanın hesaplanması
 	Fm = (s – B) / 1000 * (s / 1000); */
 	Fm = (s - B) / 1000 * (s / 1000);
	printf("Bir modelin kapladığı alan (Fm) kilometre kare(km^2) değeri: %d\n", Fm);
	/* 2.13 Yeni kazanılan stereoskobik alanın hesaplanması
	Fn = (s / 1000) * (1 – (p / 100)) * (s / 1000) * (1 – (q / 100)); */
	Fn = (s / 1000) * (1 - (p / 100)) * (s / 1000) * (1 - (q / 100));
	printf("Yeni kazanılan stereoskobik alan (Fn) kilometre kare(km^2) değeri: %d\n", Fn);

	return 0;
}
