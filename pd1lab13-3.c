#include <stdio.h>

int ciftTek(int sayi) {
    if (sayi % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int sayi;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    
    if (ciftTek(sayi)) {
        printf("%d bir cift sayidir.\n", sayi);
    } else {
        printf("%d bir tek sayidir.\n", sayi);
    }

    return 0;
}

