#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��renci yap�s�
struct Ogrenci {
    int numara;
    char ad[50];
    float vize_notu;
    float final_notu;
    struct Ogrenci* sonraki;
};

// ��renci listesi
struct Ogrenci* ogrenci_listesi = NULL;

// Yeni kay�t ekleme fonksiyonu
void yeni_kayit_ekle() {
    struct Ogrenci* yeni_ogrenci = (struct Ogrenci*)malloc(sizeof(struct Ogrenci));
    if (!yeni_ogrenci) {
        printf("Bellek tahsis edilemedi.\n");
        return;
    }

    printf("��renci Numaras�: ");
    scanf("%d", &yeni_ogrenci->numara);
    printf("��renci Ad�: ");
    scanf("%s", yeni_ogrenci->ad);
    printf("Vize Notu: ");
    scanf("%f", &yeni_ogrenci->vize_notu);
    printf("Final Notu: ");
    scanf("%f", &yeni_ogrenci->final_notu);

    yeni_ogrenci->sonraki = ogrenci_listesi;
    ogrenci_listesi = yeni_ogrenci;

    printf("Yeni kay�t eklendi.\n");
}

// Kay�t listeleme fonksiyonu
void kayit_listele(float alt_limit, float ust_limit) {
    struct Ogrenci* current = ogrenci_listesi;
    while (current != NULL) {
        if (current->vize_notu + current->final_notu >= alt_limit &&
            current->vize_notu + current->final_notu <= ust_limit) {
            printf("Numara: %d, Ad: %s, Toplam Not: %.2f\n",
                   current->numara, current->ad,
                   current->vize_notu + current->final_notu);
        }
        current = current->sonraki;
    }
}

// Kay�t g�ncelleme fonksiyonu
void kayit_guncelle(int numara) {
    struct Ogrenci* current = ogrenci_listesi;
    while (current != NULL) {
        if (current->numara == numara) {
            printf("Yeni Vize Notu: ");
            scanf("%f", &current->vize_notu);
            printf("Yeni Final Notu: ");
            scanf("%f", &current->final_notu);
            printf("Kay�t g�ncellendi.\n");
            return;
        }
        current = current->sonraki;
    }
    printf("��renci numaras� bulunamad�.\n");
}

// Ana men�y� g�r�nt�leme fonksiyonu
void ana_menuyi_goruntule() {
    printf("\nAna Menu:\n");
    printf("1- Yeni Kay�t Ekleme\n");
    printf("2- Kay�t Listeleme\n");
    printf("3- Kay�t G�ncelleme\n");
    printf("4- S�n�f Ortalamas� Hesapla\n");
    printf("5- Ortalamaya G�re En Ba�ar�l� ��renci Bilgisini G�ster\n");
    printf("6- ��k��\n");
}

int main() {
    int secim;
    float alt_limit, ust_limit;
    int numara;

    do {
        ana_menuyi_goruntule();
        printf("Se�iminizi yap�n�z: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                yeni_kayit_ekle();
                break;
            case 2:
                printf("Alt Not Limiti: ");
                scanf("%f", &alt_limit);
                printf("�st Not Limiti: ");
                scanf("%f", &ust_limit);
                kayit_listele(alt_limit, ust_limit);
                break;
            case 3:
                printf("G�ncellenecek ��renci Numaras�: ");
                scanf("%d", &numara);
                kayit_guncelle(numara);
                break;
            case 4:
                // S�n�f ortalamas� hesaplama i�lemi buraya eklenir
                break;
            case 5:
                // En ba�ar�l� ��renci bilgisi g�sterme i�lemi buraya eklenir
                break;
            case 6:
                printf("Programdan ��k�l�yor...\n");
                break;
            default:
                printf("Ge�ersiz se�enek, l�tfen tekrar deneyin.\n");
        }
    } while (secim != 6);

    // Belle�i serbest b�rak
    struct Ogrenci* current = ogrenci_listesi;
    while (current != NULL) {
        struct Ogrenci* temp = current;
        current = current->sonraki;
        free(temp);
    }

    return 0;
}

