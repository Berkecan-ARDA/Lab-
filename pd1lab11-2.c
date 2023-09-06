#include <stdio.h>
#include <stdlib.h>

int pentagonsayisi(int n){
	return n*(3*n-1)/2;
}
int main(){
	for(int n=1;n<=100;n++){
		int pentagon=pentagonsayisi(n);
		if(pentagon<100){
			printf("%d",pentagon);
			printf("\n");
		}
	}
	return 0;
}
