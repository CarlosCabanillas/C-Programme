#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 8

int main(){

	int longitud;
	char *contra;
	char buffer[N];

	printf("Dime la contraseña: ");
	scanf(" %s", buffer);
	longitud = strlen(buffer)+1;
	
	contra = (char *) malloc(longitud);
	strcpy(contra, buffer);

	printf("%c\n", *(contra + 4) );

	free(contra);

    return EXIT_SUCCESS;
}
