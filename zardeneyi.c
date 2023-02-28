#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int sayac=1;
    int zar;
	do {
	    //random ile 6'ya kadar sayi üretiyoruz , ekrana her denemenin sonucunu yazdırıyoruz//
	    //sayac++ ile sayacı arttırıpı döngüye devam ediyoruz//
		zar =rand()%6+1;
		printf("%d. deneme %d \n ", sayac,zar);	
		sayac++;
	}while(zar!=6);
	//while; 6 uretilince dongu kirilir//
    printf("%d denemeden sonra 6 rakamı gelmiştir", sayac-1);
    printf("\n**************************************\n\n");
    
    
    double h(double t) {
  return 0.12 * t * t * t * t + 12 * t * t * t - 380 * t * t + 4100 * t + 220;
}

    int t;
  //for döngüsü ile 1 den 10 kadar 10 saat olcum yapip ekrana yazdırıyoruz//
  for (t = 1; t <= 10; t++) {
    printf("%d saatteki yükseklik: %.2f\n", t, h(t));
  }
    return 0;
}
