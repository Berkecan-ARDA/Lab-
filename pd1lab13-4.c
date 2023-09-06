#include <stdio.h>
#include <math.h>


int Asal(int sayi){
    if (sayi<=1){
        return 0; 
    }
    for (int i=2; i<=sqrt(sayi); i++){
        if (sayi%i==0) {
            return 0; 
        }
    }
    return 1; 
}
int armstrong(int sayi){
	int basamaksayisi=0, temp, toplam=0;
	temp==sayi;
	while(temp>0){
		temp=temp/10;
		basamaksayisi++;
	}
	while(sayi>0){
		int basamak=sayi%10;
	    toplam=toplam+ pow (basamak,basamaksayisi);
		sayi=sayi/10;
	}
	if(toplam==sayi){
		return 1;
	}
}


int main() {
    int sayi;

    printf("Bir tamsayi girin: ");
    scanf("%d", &sayi);

    if (Asal(sayi) && Armstrong(sayi)) {
        printf("%d hem asal hem de Armstrong sayisidir", sayi);
    } else if (Asal(sayi)) {
        printf("%d bir asal sayidir.\n", sayi);
    } else if (Armstrong(sayi)) {
        printf("%d bir Armstrong sayisidir", sayi);
    } else {
        printf("%d hem asal hem de Armstrong sayisi degildir", sayi);
    }

    return 0;
}

