#include <stdio.h>

int kareAlan(int kenarUzunlugu) {
    return kenarUzunlugu * kenarUzunlugu;
}

int main() {
    int kenarUzunlugu, alan;

    printf("Karenin kenar uzunlugunu girin: ");
    scanf("%d", &kenarUzunlugu);

    alan = kareAlan(kenarUzunlugu);

    printf("Karenin alani: %d\n", alan);

    return 0;
}

