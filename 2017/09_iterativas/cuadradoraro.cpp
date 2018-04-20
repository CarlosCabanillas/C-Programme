#include <stdio.h>
#include <stdlib.h>

#define a 5
int main(){

    for (int i=0; i<a; i++) {
      for (int d=0; i<a; d++)
          if(i==0 || i==a-1||
             d==0 || d==a-1)
    printf("*");
    printf("\n");

    }


    return EXIT_SUCCESS;
}
