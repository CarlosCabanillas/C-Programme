#include <stdio.h>
#include <stdlib.h>

bool tiene_un_divisor(int D, int posible_d){
	/*D = Dividendo			posible_d = posible divisor*/
	printf("El divisor actual es: %i\n", posible_d);
	/* Si el resto de D y posible_d es 0 y posible_d es mayor que 1 devolver true*/
	if(D % posible_d == 0 && posible_d > 1)
		return true;
	else
		/* Si no, muestra por pantalla esto y devuelve el D y posible_d - 1*/
		printf("El numero %i no tiene divisor\n", D);
	
	return tiene_un_divisor( D, posible_d -1);	

}

int main(){
	int n;
	printf("Introduce un numero: \n");
	scanf(" %i\n", &n);

	if(tiene_un_divisor(n, n-1))
		printf("El numero %i tiene al menos un divisor\n", n);

    return EXIT_SUCCESS;
}

/* Falla al iniciar el programa que hay que introducir un segundo numero o poner algun caracter
para que cargue*/
