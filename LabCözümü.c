#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Öðrenci yapýsý
struct Ogrenci {
    int numara;
    char ad[50];
    float vize_notu;
    float final_notu;
    struct Ogrenci* sonraki;
};

// Öðrenci listesi
struct Ogrenci* ogrenci_listesi = NULL;

// Yeni kayýt ekleme fonksiyonu
void yeni_kayit_ekle() {
    struct Ogrenci* yeni_ogrenci = (struct Ogrenci*)malloc(sizeof(struct Ogrenci));
    if (!yeni_ogrenci) {
        printf("Bellek tahsis edilemedi.\n");
        return;
    }

    printf("Öðrenci Numarasý: ");
    scanf("%d", &yeni_ogrenci->numara);
    printf("Öðrenci Adý: ");
    scanf("%s", yeni_ogrenci->ad);
    printf("Vize Notu: ");
    scanf("%f", &yeni_ogrenci->vize_notu);
    printf("Final Notu: ");
    scanf("%f", &yeni_ogrenci->final_notu);

    yeni_ogrenci->sonraki = ogrenci_listesi;
    ogrenci_listesi = yeni_ogrenci;

    printf("Yeni kayýt eklendi.\n");
}

// Kayýt listeleme fonksiyonu
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

// Kayýt güncelleme fonksiyonu
void kayit_guncelle(int numara) {
    struct Ogrenci* current = ogrenci_listesi;
    while (current != NULL) {
        if (current->numara == numara) {
            printf("Yeni Vize Notu: ");
            scanf("%f", &current->vize_notu);
            printf("Yeni Final Notu: ");
            scanf("%f", &current->final_notu);
            printf("Kayýt güncellendi.\n");
            return;
        }
        current = current->sonraki;
    }
    printf("Öðrenci numarasý bulunamadý.\n");
}

// Ana menüyü görüntüleme fonksiyonu
void ana_menuyi_goruntule() {
    printf("\nAna Menu:\n");
    printf("1- Yeni Kayýt Ekleme\n");
    printf("2- Kayýt Listeleme\n");
    printf("3- Kayýt Güncelleme\n");
    printf("4- Sýnýf Ortalamasý Hesapla\n");
    printf("5- Ortalamaya Göre En Baþarýlý Öðrenci Bilgisini Göster\n");
    printf("6- Çýkýþ\n");
}

int main() {
    int secim;
    float alt_limit, ust_limit;
    int numara;

    do {
        ana_menuyi_goruntule();
        printf("Seçiminizi yapýnýz: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                yeni_kayit_ekle();
                break;
            case 2:
                printf("Alt Not Limiti: ");
                scanf("%f", &alt_limit);
                printf("Üst Not Limiti: ");
                scanf("%f", &ust_limit);
                kayit_listele(alt_limit, ust_limit);
                break;
            case 3:
                printf("Güncellenecek Öðrenci Numarasý: ");
                scanf("%d", &numara);
                kayit_guncelle(numara);
                break;
            case 4:
                // Sýnýf ortalamasý hesaplama iþlemi buraya eklenir
                break;
            case 5:
                // En baþarýlý öðrenci bilgisi gösterme iþlemi buraya eklenir
                break;
            case 6:
                printf("Programdan çýkýlýyor...\n");
                break;
            default:
                printf("Geçersiz seçenek, lütfen tekrar deneyin.\n");
        }
    } while (secim != 6);

    // Belleði serbest býrak
    struct Ogrenci* current = ogrenci_listesi;
    while (current != NULL) {
        struct Ogrenci* temp = current;
        current = current->sonraki;
        free(temp);
    }

    return 0;
}

