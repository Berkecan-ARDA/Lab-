#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct ogrenci {
	int ogrnumara [15]
	char ad [20]
	int vizenot;
	int finalnot;
};
//Yeni Kay�t Ekleme 
struct ogrenci bilgileri[200];
int ogrencisayisi=0;
int yeni_kayit_ekleme();
	if(ogrencisayisi<200){
		printf("O�renci Numaras� Girin: ");
		scanf ("%d",&ogrnumara);
		printf("��renci Ad� Giriniz: ");
		scanf ("%s", ad);
		printf("Vize Notu Griniz: ");
		scanf ("%d",&vizenot);
		printf("Final Notu Giriniz: ");
		scanf ("%d",&finalnot);
		ogrencisayisi++;
		ogrenci[ogrencisayisi]=ogrenci
	}
	
//Kay�t Listeleme
int kayit_listeleme(){
	int tercih;
	printf("(1)Numaraya G�re Siralama");
	printf("(2)Vize Notuna Gore Siralama");
	printf("(3)Final Notuna Gore Siralama");
	printf("Siralama T�r� Se�in: ");
	scanf ("%d",&tercih);

	
	
	
	
	
	
}


 


main(){
	int tercih;
	while (1){
		printf("ANA MENU");
		Printf("(1)Yeni Kay�t Ekleme");
		printf("(2)Kay�t Listeleme");
		printf("(3)Kay�t G�ncelleme");
		printf("(4)S�n�f Ortlamas� Hesaplama");
		printf("(5)Ortalamaya G�re En Ba�ar�l� ��renciyi G�ster");
		printf("(6)��k��");
		printf("iste�iniz nedir: ")
		scanf("%d",tercih);
		
		switch (tercih){
			case 1:
				yeni_kayit_ekleme();
				break;
				
			case 2:
				kayit_listeleme();
				break;
				
			case 3:
				kayit_guncelleme();
				break;
				
			case 4:
				sinif_ortalamasi_hesaplama();
				break;
				
			case 5:
				Ortalamaya_gore_en_basarili();
				break;
				
			case 6:
				exit(0);
				
		}
		
	}
	return 0;
}

