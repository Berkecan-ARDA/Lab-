#include <stdio.h>

int main() {
    int n;
    printf("dizide kac deger var girin: ");
    scanf("%d", &n);

    int arr[n];

    printf("Dizinin elemanlarini girin:\n");
    int a;
       for (a = 0; a< n; a++){
    	
        scanf("%d", &arr[a]);
    };

   //pointerlý kýsmý
    int sum = 0;
    int *ptr = arr; 
    int i;
    	for (i = 0; i < n; i++) {
        sum = sum + *ptr; 
        ptr++;      
    };

    printf("Dizinin elamanlari toplami: %d\n", sum);

    return 0;
}

