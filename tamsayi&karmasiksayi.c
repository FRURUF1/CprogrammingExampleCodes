#include <stdio.h>

// Tamsayı toplama fonksiyonu
void toplama_tamsayi(int x, int y) {
    printf("%d + %d = %d\n", x, y, x + y);
}

// Karmaşık sayı toplama fonksiyonu
void toplama_karmasik(float x, float y) {
    printf("%.2f + %.2f = %.2f\n", x, y, x + y);
}

// Tamsayı çarpma fonksiyonu
void carpma_tamsayi(int x, int y) {
    printf("%d x %d = %d\n", x, y, x * y);
}

// Karmaşık sayı çarpma fonksiyonu
void carpma_karmasik(float x, float y) {
    printf("%.2f x %.2f = %.2f\n", x, y, x * y);
}

int main() {
    // Kullanıcıdan tercih alınıyor
    printf("Tamsayı (1) veya Karmaşık sayı (2) seçiniz: ");
    int sayi_turu;
    scanf("%d", &sayi_turu);

    printf("Toplama (1) veya Çarpma (2) işlemi yapılsın mı? ");
    int islem_turu;
    scanf("%d", &islem_turu);

    // Kullanıcıdan sayılar alınıyor
    printf("Birinci sayıyı girin: ");
    float x;
    scanf("%f", &x);

    printf("İkinci sayıyı girin: ");
    float y;
    scanf("%f", &y);

    // Seçilen sayı türüne ve işlem türüne göre fonksiyonlar çağrılıyor
    if (sayi_turu == 1) {
        if (islem_turu == 1) {
            toplama_tamsayi((int) x, (int) y);
        } else if (islem_turu == 2) {
            carpma_tamsayi((int) x, (int) y);
        }
    } else if (sayi_turu == 2) {
        if (islem_turu == 1) {
            toplama_karmasik(x, y);
        } else if (islem_turu == 2) {
            carpma_karmasik(x, y);
        }
    }

    return 0;
}
