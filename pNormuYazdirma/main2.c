#include <stdio.h>


int main(int argc, char *argv[]) {
	
	//P-NORMU YAZDIRMA UYGULAMASI
	
	int p, N;
	
	etiket1: ;	//BU GOTO KOMUTUNU KULLANARAK BU KISMA D�NMEM�Z� SA�LIYOR.
	
	printf("p degeri:");
	while(scanf("%d", &p) != 1){	//WH�LE D�NG�S�YLE KULLANICI SAYI G�RENE KADAR D�NG� DEVAM ETT�R�L�YOR. BA�KA KARAKTERLER G�RMES� ENGELLEN�YOR.
		printf("lutfen yalnizca sayi giriniz.");
		while(getchar() != '\n');	//E�ER KULLANICI SAYI G�RMEM��SE DE�ER S�L�N�YOR. VE D�NG� TEKRARLANIYOR.
	}
	if(p==0){	//p. K�K� DE YAZDI�IMIZ ���N 1/0 �FADES� TANIMSIZ OLDU�UNDAN P 0 OLAMAZ.
		printf("p 0 olamaz. tekrar giriniz.\n");
		goto etiket1;	//TEKRAR p DE�ER� ALMAK ���N ET�KET1 KISMINA D�N�YORUZ.
	}
	
	etiket2: ;	//BU GOTO KOMUTUNU KULLANARAK BU KISMA D�NMEM�Z� SA�LIYOR.
	
	printf("N degeri:");
	while(scanf("%d", &N) != 1){	//WH�LE D�NG�S�YLE KULLANICI SAYI G�RENE KADAR D�NG� DEVAM ETT�R�L�YOR. BA�KA KARAKTERLER G�RMES� ENGELLEN�YOR.
		printf("lutfen yalnizca sayi giriniz.");
		while(getchar() != '\n');	//E�ER KULLANICI SAYI G�RMEM��SE DE�ER S�L�N�YOR. VE D�NG� TEKRARLANIYOR.
	}
	if(N<1){	//�FADE x1 �LE BA�LADI�INDAN DAHA K���K DE�ERLER� ALMIYORUZ. 
		printf("N 1'den kucuk olamaz. tekrar giriniz.\n");
		goto etiket2;	//TEKRAR N DE�ER� ALMAK ���N ET�KET2 KISMINA D�N�YORUZ.
	}
	
	
	int i;
    
    printf("(");	//BA�TAK� PARANTEZ� AYRI B�R �EK�LDE YAZDIRIYORUZ VE ORTA KISIMLARA PARANTEZ EKLENMES�N� ENGELL�YORUZ.
    for(i=1;i<N;i++){	//x1 DEN BA�LATIP xN E KADAR G�TMES� ���N FOR D�NG�S�N� KULLANIYORUZ.
    	printf("|x%d|^%d+",i,p);
	}
	printf("|x%d|^%d)^1/%d",N,p,p);	//xN KISMINI D�NG�DEN AYRI B�R �EK�LDE YAZDIRIYORUZ. ��NK� SONUNA + GELMES�N� �STEM�YORUZ.
	
	return 0;
}
