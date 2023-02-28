#include <stdio.h>
#include <math.h>
int main(void) {
  int secim;
  double width, height, radius;
  double pi=3.14;
  double ucgenalan , a, b, c;
  double s;
  double A;

  // Kullanıcıdan seçim yapmasını iste
  printf("Lütfen bir seçim yapınız:\n");
  printf("1. Dikdörtgen için alan ve çevre hesapla\n");
  printf("2. Daire için alan ve çevre hesapla\n");
  printf("3. Ucgen için alan ve çevre hesapla\n");
  scanf("%d", &secim);

  if (secim == 1) {
    // Dikdörtgen için alan ve çevre hesapla
    printf("Lütfen dikdörtgenin genişlik değerini giriniz: ");
    scanf("%lf", &width);
    printf("Lütfen dikdörtgenin yükseklik değerini giriniz: ");
    scanf("%lf", &height);

    printf("Dikdörtgenin alanı: %.2f\n", width * height);
    printf("Dikdörtgenin çevresi: %.2f\n", 2 * (width + height));
  } else if (secim == 2) {
    // Daire için alan ve çevre hesapla
    printf("Lütfen dairenin yarıçap değerini giriniz: ");
    scanf("%lf", &radius);

    printf("Dairenin alanı: %.2f\n", pi * radius * radius);
    printf("Dairenin çevresi: %.2f\n", 2 * pi * radius);
  }else if (secim == 3) {
    // Üçgen için alan ve çevre hesapla
    printf("Lütfen üçgenin kenar uzunluklarını giriniz: \n");
    scanf("%lf\n%lf\n%lf", &a ,&b,&c);
    s = (a+b+c)/2;
    
    A = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Ucgen alanı:%.2f\n ",A);
    printf("Ucgen çevresi: %.2f\n", (a + b+ c));
  }
  else {
    printf("Geçersiz seçim yaptınız. Lütfen 1 , 2 veya 3 seçimlerinden birini yapınız.\n");
  }

  return 0;
}
