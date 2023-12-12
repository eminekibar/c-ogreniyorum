#include <stdio.h>


int main(int argc, char *argv[]) {
	
	//P-NORMU YAZDIRMA UYGULAMASI
	
	int p, N;
	
	etiket1: ;	//BU GOTO KOMUTUNU KULLANARAK BU KISMA DÖNMEMÝZÝ SAÐLIYOR.
	
	printf("p degeri:");
	while(scanf("%d", &p) != 1){	//WHÝLE DÖNGÜSÜYLE KULLANICI SAYI GÝRENE KADAR DÖNGÜ DEVAM ETTÝRÝLÝYOR. BAÞKA KARAKTERLER GÝRMESÝ ENGELLENÝYOR.
		printf("lutfen yalnizca sayi giriniz.");
		while(getchar() != '\n');	//EÐER KULLANICI SAYI GÝRMEMÝÞSE DEÐER SÝLÝNÝYOR. VE DÖNGÜ TEKRARLANIYOR.
	}
	if(p==0){	//p. KÖKÜ DE YAZDIÐIMIZ ÝÇÝN 1/0 ÝFADESÝ TANIMSIZ OLDUÐUNDAN P 0 OLAMAZ.
		printf("p 0 olamaz. tekrar giriniz.\n");
		goto etiket1;	//TEKRAR p DEÐERÝ ALMAK ÝÇÝN ETÝKET1 KISMINA DÖNÜYORUZ.
	}
	
	etiket2: ;	//BU GOTO KOMUTUNU KULLANARAK BU KISMA DÖNMEMÝZÝ SAÐLIYOR.
	
	printf("N degeri:");
	while(scanf("%d", &N) != 1){	//WHÝLE DÖNGÜSÜYLE KULLANICI SAYI GÝRENE KADAR DÖNGÜ DEVAM ETTÝRÝLÝYOR. BAÞKA KARAKTERLER GÝRMESÝ ENGELLENÝYOR.
		printf("lutfen yalnizca sayi giriniz.");
		while(getchar() != '\n');	//EÐER KULLANICI SAYI GÝRMEMÝÞSE DEÐER SÝLÝNÝYOR. VE DÖNGÜ TEKRARLANIYOR.
	}
	if(N<1){	//ÝFADE x1 ÝLE BAÞLADIÐINDAN DAHA KÜÇÜK DEÐERLERÝ ALMIYORUZ. 
		printf("N 1'den kucuk olamaz. tekrar giriniz.\n");
		goto etiket2;	//TEKRAR N DEÐERÝ ALMAK ÝÇÝN ETÝKET2 KISMINA DÖNÜYORUZ.
	}
	
	
	int i;
    
    printf("(");	//BAÞTAKÝ PARANTEZÝ AYRI BÝR ÞEKÝLDE YAZDIRIYORUZ VE ORTA KISIMLARA PARANTEZ EKLENMESÝNÝ ENGELLÝYORUZ.
    for(i=1;i<N;i++){	//x1 DEN BAÞLATIP xN E KADAR GÝTMESÝ ÝÇÝN FOR DÖNGÜSÜNÜ KULLANIYORUZ.
    	printf("|x%d|^%d+",i,p);
	}
	printf("|x%d|^%d)^1/%d",N,p,p);	//xN KISMINI DÖNGÜDEN AYRI BÝR ÞEKÝLDE YAZDIRIYORUZ. ÇÜNKÜ SONUNA + GELMESÝNÝ ÝSTEMÝYORUZ.
	
	return 0;
}
