#include <stdio.h>
#include <stdlib.h>

bool tiene_un_divisor(int D, int d){
	
	/* D = Dividendo
	d = divisor*/
	if(d==1)
	return false;
	if(D%d==0)
	/* Si el resto de dividir D entre d da resto 0 devolver true*/
	return true;
	return tiene_un_divisor(D, d-1);


}

int main(){
	
	int num;
	printf("Introduzca un numero: ");
	scanf("%i", &num);
	if (tiene_un_divisor(num, num/2))
		printf("El numero %i tiene al menos un divisor\n", num);
		else
		printf("El numero %i es primo o no tiene divisores mas que él mismo\n", num);
    return 0;
}
