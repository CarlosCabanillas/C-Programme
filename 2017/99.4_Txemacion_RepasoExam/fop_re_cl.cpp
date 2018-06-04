#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	/* fopen( crea el archivo b.int), y en este lee (r=read).*/
	FILE *pf = fopen("b.int", "rb");

	/*fread lee el fichero, pasa la direccion de memoria de n, en el cual guarda algo con el tamaño de un int.*/
	fread(&n, sizeof(int), 1, pf);
	/* fclose cierra pf que es donde estamos mandando los datos.*/
	fclose(pf);
	printf("He leido : %i (%Xh)\n", n, n);

    return EXIT_SUCCESS;
}
