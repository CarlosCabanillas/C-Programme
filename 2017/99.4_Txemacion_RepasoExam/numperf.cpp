#include <stdio.h>
#include <stdlib.h>

#define NMAX 10000

int suma_div(int num, int div){
	if(div <= 0)
		return 0;
			/* el resto de num%div igual a 0 o div = 0, es una condicion, o uno o el otro.*/
	return (num%div == 0 ? div : 0) + suma_div(num, div-1) ;
}

int main(){
	printf("----------------------------\n"
			"-----LISTA DE PERFECTOS-----\n"
			"----------------------------\n\n");	
	for(int num = 1; num <NMAX; num++)
		if (num == suma_div(num, num-1))
			printf("%i\n", num);

    return EXIT_SUCCESS;
}
