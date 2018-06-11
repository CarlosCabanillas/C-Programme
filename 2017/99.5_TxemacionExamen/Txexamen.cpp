#include <stdio.h>
#include <stdlib.h>
/*1. Define una estructura que almacene el nombre y apellidos de un alumno*/
/*2. Que tenga un campo asignaturas para guardar las notas de matematicas, lengua e historia.*/
/*3. Crea la funcion struct Alumno rellenar() que pregunte los datos de los campos*/
/*4. Y un campo para almacenar con que funcion quiere el usuario lanzar un test, sabiendo que hay dos funciones para ello: void test1() y void test2()*/
/*5. Crea la funcion void modificar(Alumno *alumno) que modifica un alumno con los nuevos datos introducidos por el usuario*/
/*6. Crea la funcion void dump(struct Alumno lista[N]) que vuelque a un fichero binario el contenido del array*/
/*7. Escribe la estructura y una funcion que devuelva el par: nota minima de matematicas, indice del usuario que ostenta. struct Par minimo_mates(struct Alumno lista[N])*/
/*8. Escribe una funcion recursiva que calcule el termino enesimo de la funcion de fibonnaci.*/
#define N 0x1000

struct Par{
	double nota;
	int id;
}

typedef struct{
	double matematicas;
	double lengua;
	double historia;
}Nota;
struct Alumno{
	char nombre[N];
	char apellidos[N];
	Nota asignaturas;
	void (*test)();
};

struct Alumno rellenar(){
	struct Alumno nuevo;
	printf("Nombre: ")
	scanf("%s", nuevo.nombre);
	printf("Apellido: ");
	scanf("%s", nuevo.apellidos);
	printf("Nota de matematicas: ");
	scanf("%lf", &nuevo.asignaturas.matematicas); 
	printf("Nota de lengua: ");
	scanf("%lf", &nuevo.asignaturas.lengua); 
	printf("Nota de historia: ");
	scanf("%lf", &nuevo.asignaturas.historia); 	
	return nuevo;
}

void modificar(Alumno *alumno){
	*alumno = rellenar();
}

void dump(struct Alumno lista[N]){
					/*Lo que se abre, los permisos(escribir binario)*/
	FILE *pf=fopen("malechor.txt","wb");
	fwrite(lista, sizeof(struct Alumno), N, pf);
	fclose(pf);

}

struct Par minimo_mates(struct Alumno lista[N]){
	struct Par minimo = {100., 1};
	for(int i=0; i<N; i++)
		if(minimo.nota > lista[i].asignaturas.matematicas){
			minimo.nota = lista[i].asignaturas.matematicas;
			minimo.id = i;
}
}

int fibonacci(int n){
	if( n < 0)
	return 0;
	if (n == 0 || n == 1)
	return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}

int main(){

    return EXIT_SUCCESS;
}
