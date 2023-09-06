#include <stdio.h>
#include <stdlib.h>

int main() {
    int ogrenci_sayisi = 10;
    int boy_kilo[10][2]; 

    
    for (int i = 0; i < ogrenci_sayisi; i++) {
        printf("ogrenci %d'in boyunu (cm) girin: ", i + 1);
        scanf("%f", &boy_kilo[i][0]);
        printf("ogrenci %d'in kilosunu (kg) girin: ", i + 1);
        scanf("%f", &boy_kilo[i][1]);
    }

    
    int toplam_boy = 0;
    int toplam_kilo = 0;

    for (int i = 0; i < ogrenci_sayisi; i++) {
        toplam_boy += boy_kilo[i][0];
        toplam_kilo += boy_kilo[i][1];
    }

    
    int ortalama_boy = toplam_boy / ogrenci_sayisi;
    int ortalama_kilo = toplam_kilo / ogrenci_sayisi;

    printf("ogrencilerin ortalama boyu: %d cm\n", ortalama_boy);
    printf("ogrencilerin ortalama kilosu: %d kg\n", ortalama_kilo);

    return 0;
}

