#include <stdio.h>

 int main(void) {
  int secim;
  double input, output;

  printf("Sıcaklık Dönüştürücü\n");
  printf("1. Fahrenheit'ten Kelvin'e\n");
  printf("2. Kelvin'den Fahrenheit'e\n");
  printf("Lütfen bir seçim yapın: ");
  scanf("%d", &secim);

  if (secim == 1) {
    // Fahrenheit'ten Kelvin'e dönüştürme
    printf("Lütfen Fahrenheit değerini girin: ");
    scanf("%lf", &input);
    output = (input - 32) * (5.0 / 9.0) + 273.15;
    printf("%.2lf Fahrenheit = %.2lf Kelvin\n", input, output);
  } else if (secim == 2) {
    // Kelvin'den Fahrenheit'e dönüştürme
    printf("Lütfen Kelvin değerini girin: ");
    scanf("%lf", &input);
    output = (input - 273.15) * (9.0 / 5.0) + 32;
    printf("%.2lf Kelvin = %.2lf Fahrenheit\n", input, output);
  } else {
    printf("Geçersiz seçim.\n");
  }

  return 0;
}