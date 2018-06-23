#include <stdio.h>
#include <stdlib.h>

int russe(int op1, int op2){
	if (op2 == 0)
	return 0;

	return (op2 % 2 == 1 ? op1 : 0) + russe(op1 * 2, op2 / 2);
}



int main(){
	int op1, op2;
	printf("Dame dos numeros: ");
	scanf("%i%i", &op1, &op2);
	printf("El resultado es: %i\n", russe(op1, op2));

    return EXIT_SUCCESS;
}
