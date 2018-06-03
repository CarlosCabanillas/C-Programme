#include <stdio.h>
#include <stdlib.h>

#define M 2
#define N 3
void ver(double a[M][N]){
    printf("\n");
    for (int f=0; f<N; f++){
        for (int c=0; c<N; f++)
            printf("%4.2lf", a[f][c]);
        printf("\n");
    }
    printf("\n");
}

int main(){

    double a[M][N] = {
        {2, 3, 4},
        {4, (-5), 7}
    },
           coef[N], k;
    int cima = 0;
    double x, y;


    ver (a);
    for (int n=0; n<N; n++)
    {coef[cima++] = k = a[n][n];
        for (int col=0; col<N; col++)
            a[n][col] /= k;
        for(int f=n+1; f<N; f++){
            k = a[f][n];
            for(int col=0; col<N; col++)
                a[f][col] -= (a[n][col] * k);
        }
        ver(a);
    }

    y = a[1][1] / a[1][2];
    x = y / a[0][0];

  printf("La variable X vale: %lf\n", x);
  printf("La variable y vale: %lf\n", y);
    return EXIT_SUCCESS;
}
