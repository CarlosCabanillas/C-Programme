#include <stdio.h>
#include <stdlib.h>

int fibo(int n){
	
	if(n == 1)
		return 1;
	if(n == 0)
		return 0;
	if(n > 2)
	return fibo(n-1) + fibo(n-2);
}

int main(){

	printf(" El numero es: %i\n", fibo(7));
	return EXIT_SUCCESS;
}
