#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	
	//BILGISAYARIN AKLINDAKI SAYIYI TAHMIN ETME UYGULAMASI
	
	int rastgele;
	srand(time(NULL));	//SRAND PROGRAM HER BAÞLADIÐINDA FARKLI SAYIYLA BAÞLAMASINI SAÐLIYOR.
	rastgele=0+rand()%101;	//0 ÝLE 100 ARASINDA RASTGELE SAYI TUTMASINI SAÐLIYOR.
	
	int fark;
	int tahminSayaci=0;
	int tahmin;
	printf("BILGISAYARIN AKLINDAKI SAYIYI TAHMIN EDINIZ.(0 ile 100 arasinda)\n");
	
	etiket: ;	//BU GOTO KOMUTUNU KULLANARAK BU KISMA DÖNMEMÝZÝ SAÐLIYOR.
	printf("tahmininiz:");
	while(scanf("%d",&tahmin) != 1){	//WHÝLE DÖNGÜSÜYLE KULLANICI SAYI GÝRENE KADAR DÖNGÜ DEVAM ETTÝRÝLÝYOR. BAÞKA KARAKTERLER GÝRMESÝ ENGELLENÝYOR.
	printf("gecersiz tahmin. lutfen yalnizca sayi giriniz.\n");
	tahminSayaci++;	
	while(getchar() != '\n');	//EÐER KULLANICI SAYI GÝRMEMÝÞSE DEÐER SÝLÝNÝYOR.
	printf("tahmininiz:");	//KULLANICIDAN TEKRAR DEÐER GÝRMESÝ ÝSTENÝYOR.
}

	if(tahmin<=100 && tahmin>=0){	//TAHMÝN 100 DEN KÜÇÜK VEYA EÞÝTSE BU BLOÐUN ÝÇÝNDEKÝLER GERÇEKLEÞÝYOR.
		if(tahmin==rastgele){	//EÐER TAHMÝN DOÐRUYSA
		tahminSayaci++;	//TAHMÝN SAYIMIZI BÝR ARTIRIYORUZ.
		printf("TEBRIKLER! DOGRU TAHMIN: %d\n",tahmin);
		printf("%d. tahmininizde dogru sonuca ulastiniz.",tahminSayaci);
		}
		else{	//EÐER TAHMÝN YANLIÞSA
			if(tahmin>rastgele){	//VE TAHMÝNDEN DAHA BÜYÜK BÝR SAYI GÝRDÝYSEK
				fark=tahmin-rastgele;	//FARKIN NEGATÝF ÇIKMAMASI ÝÇÝN TAHMÝN'DEN RASTGELE'YÝ ÇIKARIYORUZ.
				if(fark<=5){	//EÐER RASTGELE SAYIYA EN FAZLA 5 BÝRÝM UZAKLIKTAYSAK BÝR GERÝ BÝLDÝRÝM ALIYORUZ.
					printf("cok yaklastiniz!\n");
				}
				else if(fark<=10 && fark>5){	//EÐER RASTGELE SAYIYA EN FAZLA 10 BÝRÝM UZAKLIKTAYSAK BÝR GERÝ BÝLDÝRÝM ALIYORUZ.
					printf("yaklastiniz.\n");
				}
				printf("daha kucuk bir sayi giriniz.\n",fark);	//RASTGELE'DEN DAHA BÜYÜK BÝR SAYI GÝRDÝÐÝMÝZ ÝÇÝN BU GERÝ BÝLDÝRÝMÝ ALIYORUZ.
				tahminSayaci++;	//TAHMÝN SAYIMIZI BÝR ARTIRIYORUZ.
				goto etiket;	//TEKRAR TAHMÝN DEÐERÝ ALMAK ÝÇÝN ETÝKET KISMINA DÖNÜYORUZ.
			}
			else if(tahmin<rastgele){	//VE TAHMÝNDEN DAHA KÜÇÜK BÝR SAYI GÝRDÝYSEK
				fark=rastgele-tahmin;	//FARKIN NEGATÝF ÇIKMAMASI ÝÇÝN RASTGELE'DEN TAHMÝN'Ý ÇIKARIYORUZ.
				if(fark<=5){	//EÐER RASTGELE SAYIYA EN FAZLA 5 BÝRÝM UZAKLIKTAYSAK BÝR GERÝ BÝLDÝRÝM ALIYORUZ.
					printf("cok yaklastiniz!\n");
				}
				else if(fark<=10 && fark>5){	//EÐER RASTGELE SAYIYA EN FAZLA 10 BÝRÝM UZAKLIKTAYSAK BÝR GERÝ BÝLDÝRÝM ALIYORUZ.
					printf("yaklastiniz.\n");
				}
				printf("daha buyuk bir sayi giriniz.\n",fark);	//RASTGELE'DEN DAHA KÜÇÜK BÝR SAYI GÝRDÝÐÝMÝZ ÝÇÝN BU GERÝ BÝLDÝRÝMÝ ALIYORUZ.
				tahminSayaci++;	//TAHMÝN SAYIMIZI BÝR ARTIRIYORUZ.
				goto etiket;	//TEKRAR TAHMÝN DEÐERÝ ALMAK ÝÇÝN ETÝKET KISMINA DÖNÜYORUZ.
		}}
	}
	else{	//TAHMÝN 100 DEN BÜYÜKSE BU BLOÐUN ÝÇÝNDEKÝLER GERÇEKLEÞÝYOR.
		printf("0 ile 100 arasinda oldugunu unutmayin!! tekrar deneyiniz.\n");
		tahminSayaci++;	//TAHMÝN SAYIMIZI BÝR ARTIRIYORUZ.
		goto etiket;	//TEKRAR TAHMÝN DEÐERÝ ALMAK ÝÇÝN ETÝKET KISMINA DÖNÜYORUZ.
	}
	
	return 0;
}
