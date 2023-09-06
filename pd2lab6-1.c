#include <stdio.h>
#include <stdlib.h>

//dizi say�s�n� ve elemanlar�n� kullan�c�dan alan daha sonra en b�y�k de�eri bast�ran kod

int main() {
    int elamansayisi;

    printf("Elelman sayisini girin: ");
    scanf("%d", &elamansayisi);
    
    int *arr = (int *)calloc(elamansayisi, sizeof(int));
    if (arr == NULL) {
        printf("Bellekte yer yok.\n");
        return 1; 
    }

    
    int enbuyuk = 0; 

    for (int i = 0; i < elamansayisi; i++) {
        printf("Elaman girin %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] > enbuyuk) {
            enbuyuk = arr[i];
        }
    }

    
    printf("Girilen en buyuk deger: %d\n", enbuyuk);


    return 0;
}

