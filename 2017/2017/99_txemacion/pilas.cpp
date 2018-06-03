#include <stdlib.h>
#include <stdio.h>
#define N 0x100

typedef struct{
	int cima;
	int data[N];
}Pila;

void meterla(int dato,Pila *pilila){
	/* -> utilizar, de esta pila utiliza X */
	pilila->data[pilila->cima] = dato;
	/* Imprime por pantalla el numero, dato de la cima de la pilila*/
	printf(" Metemos un: %6i\n", pilila->data[pilila->cima]);
	/* Eleva en uno la cima*/
	pilila->cima++;
}

int sacarla(Pila *pilila){
	/* Bajamos en uno la cima*/
	pilila->cima--;
	/* Imprime por pantalla el numero, dato de la cima de la pilila*/
	printf(" Sacamos un: %6i\n", pilila->data[pilila->cima]);
	/* Devuelve el dato que ahora esta en la cima*/
	return pilila->data[pilila->cima];
}

int main(){
	/*Pila pilar es como un int dato*/
	Pila pilar;
	/* Ponemos la primera posicion del array a 0*/
	pilar.cima=0;
	meterla(7 , &pilar);
	meterla(65 , &pilar);
	meterla(8 , &pilar);
	meterla(3 , &pilar);
	sacarla(&pilar);
	sacarla(&pilar);
	
	return EXIT_SUCCESS;
}
