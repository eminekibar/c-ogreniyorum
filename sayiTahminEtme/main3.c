#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	
	//BILGISAYARIN AKLINDAKI SAYIYI TAHMIN ETME UYGULAMASI
	
	int rastgele;
	srand(time(NULL));	//SRAND PROGRAM HER BA�LADI�INDA FARKLI SAYIYLA BA�LAMASINI SA�LIYOR.
	rastgele=0+rand()%101;	//0 �LE 100 ARASINDA RASTGELE SAYI TUTMASINI SA�LIYOR.
	
	int fark;
	int tahminSayaci=0;
	int tahmin;
	printf("BILGISAYARIN AKLINDAKI SAYIYI TAHMIN EDINIZ.(0 ile 100 arasinda)\n");
	
	etiket: ;	//BU GOTO KOMUTUNU KULLANARAK BU KISMA D�NMEM�Z� SA�LIYOR.
	printf("tahmininiz:");
	while(scanf("%d",&tahmin) != 1){	//WH�LE D�NG�S�YLE KULLANICI SAYI G�RENE KADAR D�NG� DEVAM ETT�R�L�YOR. BA�KA KARAKTERLER G�RMES� ENGELLEN�YOR.
	printf("gecersiz tahmin. lutfen yalnizca sayi giriniz.\n");
	tahminSayaci++;	
	while(getchar() != '\n');	//E�ER KULLANICI SAYI G�RMEM��SE DE�ER S�L�N�YOR.
	printf("tahmininiz:");	//KULLANICIDAN TEKRAR DE�ER G�RMES� �STEN�YOR.
}

	if(tahmin<=100 && tahmin>=0){	//TAHM�N 100 DEN K���K VEYA E��TSE BU BLO�UN ���NDEK�LER GER�EKLE��YOR.
		if(tahmin==rastgele){	//E�ER TAHM�N DO�RUYSA
		tahminSayaci++;	//TAHM�N SAYIMIZI B�R ARTIRIYORUZ.
		printf("TEBRIKLER! DOGRU TAHMIN: %d\n",tahmin);
		printf("%d. tahmininizde dogru sonuca ulastiniz.",tahminSayaci);
		}
		else{	//E�ER TAHM�N YANLI�SA
			if(tahmin>rastgele){	//VE TAHM�NDEN DAHA B�Y�K B�R SAYI G�RD�YSEK
				fark=tahmin-rastgele;	//FARKIN NEGAT�F �IKMAMASI ���N TAHM�N'DEN RASTGELE'Y� �IKARIYORUZ.
				if(fark<=5){	//E�ER RASTGELE SAYIYA EN FAZLA 5 B�R�M UZAKLIKTAYSAK B�R GER� B�LD�R�M ALIYORUZ.
					printf("cok yaklastiniz!\n");
				}
				else if(fark<=10 && fark>5){	//E�ER RASTGELE SAYIYA EN FAZLA 10 B�R�M UZAKLIKTAYSAK B�R GER� B�LD�R�M ALIYORUZ.
					printf("yaklastiniz.\n");
				}
				printf("daha kucuk bir sayi giriniz.\n",fark);	//RASTGELE'DEN DAHA B�Y�K B�R SAYI G�RD���M�Z ���N BU GER� B�LD�R�M� ALIYORUZ.
				tahminSayaci++;	//TAHM�N SAYIMIZI B�R ARTIRIYORUZ.
				goto etiket;	//TEKRAR TAHM�N DE�ER� ALMAK ���N ET�KET KISMINA D�N�YORUZ.
			}
			else if(tahmin<rastgele){	//VE TAHM�NDEN DAHA K���K B�R SAYI G�RD�YSEK
				fark=rastgele-tahmin;	//FARKIN NEGAT�F �IKMAMASI ���N RASTGELE'DEN TAHM�N'� �IKARIYORUZ.
				if(fark<=5){	//E�ER RASTGELE SAYIYA EN FAZLA 5 B�R�M UZAKLIKTAYSAK B�R GER� B�LD�R�M ALIYORUZ.
					printf("cok yaklastiniz!\n");
				}
				else if(fark<=10 && fark>5){	//E�ER RASTGELE SAYIYA EN FAZLA 10 B�R�M UZAKLIKTAYSAK B�R GER� B�LD�R�M ALIYORUZ.
					printf("yaklastiniz.\n");
				}
				printf("daha buyuk bir sayi giriniz.\n",fark);	//RASTGELE'DEN DAHA K���K B�R SAYI G�RD���M�Z ���N BU GER� B�LD�R�M� ALIYORUZ.
				tahminSayaci++;	//TAHM�N SAYIMIZI B�R ARTIRIYORUZ.
				goto etiket;	//TEKRAR TAHM�N DE�ER� ALMAK ���N ET�KET KISMINA D�N�YORUZ.
		}}
	}
	else{	//TAHM�N 100 DEN B�Y�KSE BU BLO�UN ���NDEK�LER GER�EKLE��YOR.
		printf("0 ile 100 arasinda oldugunu unutmayin!! tekrar deneyiniz.\n");
		tahminSayaci++;	//TAHM�N SAYIMIZI B�R ARTIRIYORUZ.
		goto etiket;	//TEKRAR TAHM�N DE�ER� ALMAK ���N ET�KET KISMINA D�N�YORUZ.
	}
	
	return 0;
}
