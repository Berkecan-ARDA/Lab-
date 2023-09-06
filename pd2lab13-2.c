#include <stdio.h>

float ortalamaHesapla(int sayilar[], int uzunluk) {
    int toplam = 0;

    for (int i = 0; i < uzunluk; i++) {
        toplam += sayilar[i];
    }

    return (float)toplam / uzunluk;
}

int main() {
    int sayilar[5];
    float ortalama;

    printf("Lutfen 5 sayi giriniz:\n");

    for (int i = 0; i < 5; i++) {
        printf("Sayi %d: ", i + 1);
        scanf("%d", &sayilar[i]);
    }

    ortalama = ortalamaHesapla(sayilar, 5);

    printf("Girilen sayilarin ortalamasi: %f\n", ortalama);

    return 0;
}


