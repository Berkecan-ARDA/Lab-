#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct ogrenci {
	int ogrnumara [15]
	char ad [20]
	int vizenot;
	int finalnot;
};
//Yeni Kayýt Ekleme 
struct ogrenci bilgileri[200];
int ogrencisayisi=0;
int yeni_kayit_ekleme();
	if(ogrencisayisi<200){
		printf("Oðrenci Numarasý Girin: ");
		scanf ("%d",&ogrnumara);
		printf("Öðrenci Adý Giriniz: ");
		scanf ("%s", ad);
		printf("Vize Notu Griniz: ");
		scanf ("%d",&vizenot);
		printf("Final Notu Giriniz: ");
		scanf ("%d",&finalnot);
		ogrencisayisi++;
		ogrenci[ogrencisayisi]=ogrenci
	}
	
//Kayýt Listeleme
int kayit_listeleme(){
	int tercih;
	printf("(1)Numaraya Göre Siralama");
	printf("(2)Vize Notuna Gore Siralama");
	printf("(3)Final Notuna Gore Siralama");
	printf("Siralama Türü Seçin: ");
	scanf ("%d",&tercih);

	
	
	
	
	
	
}


 


main(){
	int tercih;
	while (1){
		printf("ANA MENU");
		Printf("(1)Yeni Kayýt Ekleme");
		printf("(2)Kayýt Listeleme");
		printf("(3)Kayýt Güncelleme");
		printf("(4)Sýnýf Ortlamasý Hesaplama");
		printf("(5)Ortalamaya Göre En Baþarýlý Öðrenciyi Göster");
		printf("(6)çýkýþ");
		printf("isteðiniz nedir: ")
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

