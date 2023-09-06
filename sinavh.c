#include <stdio.h>
#include <stdlib.h>

void fun(int n, int a, int b){
	a=5,n=10,b=7;
if (n <= 0)
return;
fun(n - 2, a, b + n);
printf("%d %d %d\n", n, a, b);
}
