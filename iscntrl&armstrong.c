#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
 setlocale(LC_ALL, "Turkish");

	
	char c1 = '\n', c2 = '\r', c3 = '\t', c4 = 'D', c5 ;
	
	printf("\n\n--------iscntrl() KULLANIMI--------\n\n");
    /*once sabit degerlerin kontrolunu yaptim sonra alinan inputun kontrolunu yaptim*/
    printf("\\n bir kontrol karakteri%s\n", iscntrl(c1) ? "dir!" : " degildir!");
    printf("\\r bir kontrol karakteri%s\n", iscntrl(c2) ? "dir!" : " degildir!");
    printf("\\t bir kontrol karakteri%s\n", iscntrl(c3) ? "dir!" : " degildir!");
    printf("D bir kontrol karakteri%s\n", iscntrl(c4) ? "dir!" : " degildir!");
    printf("Bir karakter giriniz:",c5);
    scanf("%c",&c5);
    /*if icinde iscntrl degeri 1 donerse kontrol degeridir ; 1 donmezse kontrol degeri degildir yazdirdim*/
    if (iscntrl(c5) ==1)
	{
		printf("\%c bir kontrol karakteridir\n", c5);
	}
	else
	{
		printf("\%c bir kontrol karakteri degildir\n", c5);
	}    
    
    
    printf("\n\n\n***********************************\n\n\n");
    printf("---ARMSTRONG SAYISI MI? DEGIL MI?---\n\n");
    int sayi, sayimiz, kalan, toplam = 0;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    /*sayi inputu aldik bunu daha sonradan karsilastirma yapmak icin kullanacagiz bunun icin sayimiz degiskenine bunu atiyorum*/
    sayimiz = sayi;
    while(sayimiz != 0){
    	kalan = sayimiz%10;
    	toplam =toplam + kalan*kalan*kalan;
    	sayimiz=sayimiz/ 10;
	}
	/*sayinin mod 10'unu aldik kalan degiskenine atadim ; toplam degiskenine kalanin kupunu ekleyip yeni toplamimizi elde ettim ; sayimiz'i da 10'a bolerek yeniden atanir*/
	/*while dongumuz sayimiz degiskeni 0 olana dek devam edecek*/
	if(toplam == sayi)
	printf("%d bir Armstrong sayidir.",sayi);
	else
	printf("%d bir Armstrong sayi degildir\n\n",sayi);
	/*if fonksiyonunda toplam ve sayimiz esitse armstrongdur degilse armstrong degildir yazdirdim*/

    
	return 0;
}
