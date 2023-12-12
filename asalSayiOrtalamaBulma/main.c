#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, char *argv[]) {
	
	//GÝRÝLEN ÝKÝ SAYI ARASINDAKÝ ASAL SAYILARI BULUP BUNLARIN ORTALAMASINI YAZDIRMA UYGULAMASI
	
etiket: ;	//BU GOTO KOMUTUNU KULLANARAK BU KISMA DÖNMEMÝZÝ SAÐLIYOR.
	
	int sayi1, sayi2;
	
	printf("BIRINCI SAYIYI GIRINIZ :");
	while(scanf("%d",&sayi1) != 1){	//WHÝLE DÖNGÜSÜYLE KULLANICI SAYI GÝRENE KADAR DÖNGÜ DEVAM ETTÝRÝLÝYOR. BAÞKA KARAKTERLER GÝRMESÝ ENGELLENÝYOR.
		printf("LUTFEN YALNIZCA SAYI GIRINIZ.\n");
		while(getchar() != '\n');	//EÐER KULLANICI SAYI GÝRMEMÝÞSE DEÐER SÝLÝNÝYOR.
		printf("BIRINCI SAYIYI GIRINIZ :");	//KULLANICIDAN TEKRAR DEÐER GÝRMESÝ ÝSTENÝYOR.
	}
	
	printf("IKINCI SAYIYI GIRINIZ :");
	while(scanf("%d",&sayi2) != 1){	//WHÝLE DÖNGÜSÜYLE KULLANICI SAYI GÝRENE KADAR DÖNGÜ DEVAM ETTÝRÝLÝYOR. BAÞKA KARAKTERLER GÝRMESÝ ENGELLENÝYOR.
		printf("LUTFEN YALNIZCA SAYI GIRINIZ.\n");
		while(getchar() != '\n');	//EÐER KULLANICI SAYI GÝRMEMÝÞSE DEÐER SÝLÝNÝYOR.
		printf("IKINCI SAYIYI GIRINIZ :");	//KULLANICIDAN TEKRAR DEÐER GÝRMESÝ ÝSTENÝYOR.
	}

	int a, b, sonuc, tane=0, toplam=0;
	
	printf("ASAL SAYI LISTESI: \n");
		
	if(sayi1<0 && sayi2<0){	//EÐER SAYI ARALIÐI NEGATÝF SAYILARDAN OLUÞUYORSA ASAL SAYI YOKTUR. BU YÜZDEN BU DURUMDA UYARI VERÝLÝYOR.
	printf("-\n");
	printf("NEGATIF SAYILAR ASAL OLAMAZ. TEKRAR DEGER GIRINIZ.\n");
	goto etiket;	//DAHA SONRA TEKRAR SAYI ÝSTEMEK ÝÇÝN ETÝKET KISMINA DÖNÜLÜYOR.
	}
	
	else if(sayi1==sayi2){	//EÐER SAYILAR BÝRBÝRÝNE EÞÝTSE YÝNE UYARI VERÝLÝYOR.
	printf("-\n");
	printf("BIRBIRINDEN FARKLI SAYILAR GIRINIZ.\n");
	goto etiket;	//VE FARKLI SAYILAR ÝSTEMEK ÝÇÝN ETÝKET KISMINA DÖNÜLÜYOR.
	}
	
	else if(sayi1>sayi2){	//ILK GÝRÝLEN DEÐER ÝKÝNCÝDEN BÜYÜKSE BU BLOÐUN ÝÇÝNDEKÝLERÝ GERÇEKLEÞTÝRÝYORUZ.
		for(a=sayi2+1 ; a<sayi1 ; a++){	//GÝRÝLEN ÝKÝ SAYINIIN ARASINDAKÝ SAYILARI BULMAK ÝÇÝN FOR DÖNGÜSÜ KULLANIYORUZ. SAYILARI a DEÐÝÞKENÝNÝN ÝÇÝNDE TUTUYORUZ.
		sonuc=1;	//SAYININ ASAL MI DEÐÝL MÝ OLDÐUNU SONUC DEÐÝÞKENÝNDEN ANLAYACAÐIZ.
			for(b=2 ; b<a ; b++){
				if(a%b==0){	//BÝR ASAL SAYI YALNIZCA KENDÝSÝNE VE 1 E BÖLÜNEBÝLÝR. BU DÖNGÜYLE SAYIYI 2 DEN BAÞLAYARAK TEKER TEKER BÖLÜYORUZ. 
							//VE BÖLÜMÜNDEN KALAN 0 ÝSE BU BLOÐUN ÝÇÝNDEKÝLERÝ GERÇEKLEÞTÝRÝYORUZ.
				sonuc=0;	//SAYI ASAL DEÐÝLSE DEÐERÝ 0 OLARAK DEÐÝÞTÝRIYORUZ.
				}
			}
			if(sonuc==1){	//EÐER SONUÇ HALA 1 ÝSE YANÝ ASAL ÝSE BU BLOÐUN ÝÇÝNDEKÝLERÝ GERÇEKLEÞTÝRÝYORUZ.
				if(a<2){	//NEGATÝF SAYILAR ASAL OLMADIÐINDAN EN KÜÇÜK ASAL SAYIDAN(2) KÜÇÜK SAYILARI DA DAHÝL ETMÝYORUZ. VE ONLARI CONTÝNUE KOMUTU ÝLE ATLIYORUZ.
					continue;
				}
				else{	//EÐER BÜYÜKSE ATLAMIYORUZ VE YAZDIRIYORUZ.
					printf("%d \n",a);
					tane=tane+1;	//HER ASAL SAYI BULDUÐUMUZDA TANE SAYISINI ARTIRIYORUZ.
					toplam=toplam+a;	//ASAL SAYILARIN TOPLAMINI DA BU ÞEKÝLDE BULUYORUZ.
				}
			}		
			}
		printf("tane= %d \n",tane);
		printf("toplam= %d \n",toplam);	
		float ortalama=(float)toplam / (float)tane;	//ORTALAMAYI BULMAK ÝÇÝN TOPLAMI TANEYE BÖLÜYORUZ. VÝRGÜLDEN SONRASININ DOÐRU ÇIKMASI ÝÇÝN TÜR DEÐÝÞÝMÝ YAPIYORUZ.
		printf("ortalama= %f \n",ortalama);
		}
	
		else if(sayi1<sayi2){	//ILK GÝRÝLEN DEÐER ÝKÝNCÝDEN KÜÇÜKSE BU BLOÐUN ÝÇÝNDEKÝLER GERÇEKLEÞTÝRÝLÝR.
			for(a=sayi1+1 ; a<sayi2 ; a++){	//GÝRÝLEN ÝKÝ SAYINIIN ARASINDAKÝ SAYILARI BULMAK ÝÇÝN FOR DÖNGÜSÜ KULLANIYORUZ. SAYILARI a DEÐÝÞKENÝNÝN ÝÇÝNDE TUTUYORUZ.
			sonuc=1;	//SAYININ ASAL MI DEÐÝL MÝ OLDÐUNU SONUC DEÐÝÞKENÝNDEN ANLAYACAÐIZ.
			for(b=2 ; b<a ; b++){
				if(a%b==0){	//BÝR ASAL SAYI YALNIZCA KENDÝSÝNE VE 1 E BÖLÜNEBÝLÝR. BU DÖNGÜYLE SAYIYI 2 DEN BAÞLAYARAK TEKER TEKER BÖLÜYORUZ. 
							//VE BÖLÜMÜNDEN KALAN 0 ÝSE BU BLOÐUN ÝÇÝNDEKÝLERÝ GERÇEKLEÞTÝRÝYORUZ.
				sonuc=0;	//SAYI ASAL DEÐÝLSE DEÐERÝ 0 OLARAK DEÐÝÞTÝRIYORUZ.
				}
			}
			if(sonuc==1){	//EÐER SONUÇ HALA 1 ÝSE YANÝ ASAL ÝSE BU BLOÐUN ÝÇÝNDEKÝLERÝ GERÇEKLEÞTÝRÝYORUZ.
				if(a<2){	//NEGATÝF SAYILAR ASAL OLMADIÐINDAN EN KÜÇÜK ASAL SAYIDAN(2) KÜÇÜK SAYILARI DA DAHÝL ETMÝYORUZ. VE ONLARI CONTÝNUE KOMUTU ÝLE ATLIYORUZ.
					continue;
				}
				else{	//EÐER BÜYÜKSE ATLAMIYORUZ VE YAZDIRIYORUZ.
					printf("%d \n",a);
					tane=tane+1;	//HER ASAL SAYI BULDUÐUMUZDA TANE SAYISINI ARTIRIYORUZ.
					toplam=toplam+a;	//ASAL SAYILARIN TOPLAMINI DA BU ÞEKÝLDE BULUYORUZ.
				}
			
			}
			}
		printf("tane= %d \n",tane);
		printf("toplam= %d \n",toplam);	
		float ortalama=(float)toplam / (float)tane;	//ORTALAMAYI BULMAK ÝÇÝN TOPLAMI TANEYE BÖLÜYORUZ. VÝRGÜLDEN SONRASININ DOÐRU ÇIKMASI ÝÇÝN TÜR DEÐÝÞÝMÝ YAPIYORUZ.
		printf("ortalama= %f \n",ortalama);
		}

	return 0;
}
