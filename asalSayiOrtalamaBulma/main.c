#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, char *argv[]) {
	
	//G�R�LEN �K� SAYI ARASINDAK� ASAL SAYILARI BULUP BUNLARIN ORTALAMASINI YAZDIRMA UYGULAMASI
	
etiket: ;	//BU GOTO KOMUTUNU KULLANARAK BU KISMA D�NMEM�Z� SA�LIYOR.
	
	int sayi1, sayi2;
	
	printf("BIRINCI SAYIYI GIRINIZ :");
	while(scanf("%d",&sayi1) != 1){	//WH�LE D�NG�S�YLE KULLANICI SAYI G�RENE KADAR D�NG� DEVAM ETT�R�L�YOR. BA�KA KARAKTERLER G�RMES� ENGELLEN�YOR.
		printf("LUTFEN YALNIZCA SAYI GIRINIZ.\n");
		while(getchar() != '\n');	//E�ER KULLANICI SAYI G�RMEM��SE DE�ER S�L�N�YOR.
		printf("BIRINCI SAYIYI GIRINIZ :");	//KULLANICIDAN TEKRAR DE�ER G�RMES� �STEN�YOR.
	}
	
	printf("IKINCI SAYIYI GIRINIZ :");
	while(scanf("%d",&sayi2) != 1){	//WH�LE D�NG�S�YLE KULLANICI SAYI G�RENE KADAR D�NG� DEVAM ETT�R�L�YOR. BA�KA KARAKTERLER G�RMES� ENGELLEN�YOR.
		printf("LUTFEN YALNIZCA SAYI GIRINIZ.\n");
		while(getchar() != '\n');	//E�ER KULLANICI SAYI G�RMEM��SE DE�ER S�L�N�YOR.
		printf("IKINCI SAYIYI GIRINIZ :");	//KULLANICIDAN TEKRAR DE�ER G�RMES� �STEN�YOR.
	}

	int a, b, sonuc, tane=0, toplam=0;
	
	printf("ASAL SAYI LISTESI: \n");
		
	if(sayi1<0 && sayi2<0){	//E�ER SAYI ARALI�I NEGAT�F SAYILARDAN OLU�UYORSA ASAL SAYI YOKTUR. BU Y�ZDEN BU DURUMDA UYARI VER�L�YOR.
	printf("-\n");
	printf("NEGATIF SAYILAR ASAL OLAMAZ. TEKRAR DEGER GIRINIZ.\n");
	goto etiket;	//DAHA SONRA TEKRAR SAYI �STEMEK ���N ET�KET KISMINA D�N�L�YOR.
	}
	
	else if(sayi1==sayi2){	//E�ER SAYILAR B�RB�R�NE E��TSE Y�NE UYARI VER�L�YOR.
	printf("-\n");
	printf("BIRBIRINDEN FARKLI SAYILAR GIRINIZ.\n");
	goto etiket;	//VE FARKLI SAYILAR �STEMEK ���N ET�KET KISMINA D�N�L�YOR.
	}
	
	else if(sayi1>sayi2){	//ILK G�R�LEN DE�ER �K�NC�DEN B�Y�KSE BU BLO�UN ���NDEK�LER� GER�EKLE�T�R�YORUZ.
		for(a=sayi2+1 ; a<sayi1 ; a++){	//G�R�LEN �K� SAYINIIN ARASINDAK� SAYILARI BULMAK ���N FOR D�NG�S� KULLANIYORUZ. SAYILARI a DE���KEN�N�N ���NDE TUTUYORUZ.
		sonuc=1;	//SAYININ ASAL MI DE��L M� OLD�UNU SONUC DE���KEN�NDEN ANLAYACA�IZ.
			for(b=2 ; b<a ; b++){
				if(a%b==0){	//B�R ASAL SAYI YALNIZCA KEND�S�NE VE 1 E B�L�NEB�L�R. BU D�NG�YLE SAYIYI 2 DEN BA�LAYARAK TEKER TEKER B�L�YORUZ. 
							//VE B�L�M�NDEN KALAN 0 �SE BU BLO�UN ���NDEK�LER� GER�EKLE�T�R�YORUZ.
				sonuc=0;	//SAYI ASAL DE��LSE DE�ER� 0 OLARAK DE���T�RIYORUZ.
				}
			}
			if(sonuc==1){	//E�ER SONU� HALA 1 �SE YAN� ASAL �SE BU BLO�UN ���NDEK�LER� GER�EKLE�T�R�YORUZ.
				if(a<2){	//NEGAT�F SAYILAR ASAL OLMADI�INDAN EN K���K ASAL SAYIDAN(2) K���K SAYILARI DA DAH�L ETM�YORUZ. VE ONLARI CONT�NUE KOMUTU �LE ATLIYORUZ.
					continue;
				}
				else{	//E�ER B�Y�KSE ATLAMIYORUZ VE YAZDIRIYORUZ.
					printf("%d \n",a);
					tane=tane+1;	//HER ASAL SAYI BULDU�UMUZDA TANE SAYISINI ARTIRIYORUZ.
					toplam=toplam+a;	//ASAL SAYILARIN TOPLAMINI DA BU �EK�LDE BULUYORUZ.
				}
			}		
			}
		printf("tane= %d \n",tane);
		printf("toplam= %d \n",toplam);	
		float ortalama=(float)toplam / (float)tane;	//ORTALAMAYI BULMAK ���N TOPLAMI TANEYE B�L�YORUZ. V�RG�LDEN SONRASININ DO�RU �IKMASI ���N T�R DE����M� YAPIYORUZ.
		printf("ortalama= %f \n",ortalama);
		}
	
		else if(sayi1<sayi2){	//ILK G�R�LEN DE�ER �K�NC�DEN K���KSE BU BLO�UN ���NDEK�LER GER�EKLE�T�R�L�R.
			for(a=sayi1+1 ; a<sayi2 ; a++){	//G�R�LEN �K� SAYINIIN ARASINDAK� SAYILARI BULMAK ���N FOR D�NG�S� KULLANIYORUZ. SAYILARI a DE���KEN�N�N ���NDE TUTUYORUZ.
			sonuc=1;	//SAYININ ASAL MI DE��L M� OLD�UNU SONUC DE���KEN�NDEN ANLAYACA�IZ.
			for(b=2 ; b<a ; b++){
				if(a%b==0){	//B�R ASAL SAYI YALNIZCA KEND�S�NE VE 1 E B�L�NEB�L�R. BU D�NG�YLE SAYIYI 2 DEN BA�LAYARAK TEKER TEKER B�L�YORUZ. 
							//VE B�L�M�NDEN KALAN 0 �SE BU BLO�UN ���NDEK�LER� GER�EKLE�T�R�YORUZ.
				sonuc=0;	//SAYI ASAL DE��LSE DE�ER� 0 OLARAK DE���T�RIYORUZ.
				}
			}
			if(sonuc==1){	//E�ER SONU� HALA 1 �SE YAN� ASAL �SE BU BLO�UN ���NDEK�LER� GER�EKLE�T�R�YORUZ.
				if(a<2){	//NEGAT�F SAYILAR ASAL OLMADI�INDAN EN K���K ASAL SAYIDAN(2) K���K SAYILARI DA DAH�L ETM�YORUZ. VE ONLARI CONT�NUE KOMUTU �LE ATLIYORUZ.
					continue;
				}
				else{	//E�ER B�Y�KSE ATLAMIYORUZ VE YAZDIRIYORUZ.
					printf("%d \n",a);
					tane=tane+1;	//HER ASAL SAYI BULDU�UMUZDA TANE SAYISINI ARTIRIYORUZ.
					toplam=toplam+a;	//ASAL SAYILARIN TOPLAMINI DA BU �EK�LDE BULUYORUZ.
				}
			
			}
			}
		printf("tane= %d \n",tane);
		printf("toplam= %d \n",toplam);	
		float ortalama=(float)toplam / (float)tane;	//ORTALAMAYI BULMAK ���N TOPLAMI TANEYE B�L�YORUZ. V�RG�LDEN SONRASININ DO�RU �IKMASI ���N T�R DE����M� YAPIYORUZ.
		printf("ortalama= %f \n",ortalama);
		}

	return 0;
}
