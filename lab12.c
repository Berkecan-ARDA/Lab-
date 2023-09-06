#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ogrenci {
    char ogrenci_no[20];
    char isim[50];
    char bolum[50];
};


#define DOSYA_ADI "ogrenci_bilgileri.dat"
//dosya oluþturma
void dosyaOlustur() {
    FILE *dosya;
    dosya = fopen(DOSYA_ADI, "dosyaoluþturma");
    if (dosya == NULL) {
        printf("Dosya olusturulamadý.\n");
        exit(1);
    }
    fclose(dosya);
    printf("Dosya olusturuldu.\n");
}
//kayýt ekleme
void kayitEkle() {
    struct Ogrenci yeniOgrenci;
    FILE *dosya;
    dosya = fopen(DOSYA_ADI, "kayýtekleme");
    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        exit(1);
    }

    printf("Ogrenci No: ");
    scanf("%s", yeniOgrenci.ogrenci_no);
    printf("Isim: ");
    scanf("%s", yeniOgrenci.isim);
    printf("Bolum: ");
    scanf("%s", yeniOgrenci.bolum);

    fwrite(&yeniOgrenci, sizeof(struct Ogrenci), 1, dosya);
    fclose(dosya);
    printf("Kayit eklendi.\n");
}
//isme göre arama yapma
void ismeGoreAra() {
    struct Ogrenci ogrenci;
    FILE *dosya;
    dosya = fopen(DOSYA_ADI, "Ismegorearama");
    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        exit(1);
    }

    char isimAra[50];
    printf("Aranacak Isim: ");
    scanf("%s", isimAra);

    int bulundu = 0;

    while (fread(&ogrenci, sizeof(struct Ogrenci), 1, dosya) == 1) {
        if (strcmp(ogrenci.isim, isimAra) == 0) {
            printf("Bulunan Kayit:\n");
            printf("Ogrenci No: %s\n", ogrenci.ogrenci_no);
            printf("Isim: %s\n", ogrenci.isim);
            printf("Bolum: %s\n", ogrenci.bolum);
            bulundu = 1;
            break;
        }
    }

    if (!bulundu) {
        printf("Aranan isme gore kayit bulunamadi.\n");
    }

    fclose(dosya);
}
//ana menü feonksiyonlarý
int main() {
    while (1) {
        printf("ANA MENU:\n");
        printf("1. Dosya Olustur\n");
        printf("2. Kayit Ekle\n");
        printf("3. Isme Gore Ara\n");
        printf("4. Cikis\n");

        int secim;
        printf("Bir islem secin : ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                dosyaOlustur();
                break;
            case 2:
                kayitEkle();
                break;
            case 3:
                ismeGoreAra();
                break;
            case 4:
                printf("Programdan cikiliyorr.\n");
                exit(0);
            default:
                printf("Gecersiz Secim. Lutfen tekrar deneyin.\n");
        }
    }

    return 0;
}
