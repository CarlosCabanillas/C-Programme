#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PASO 0.00005

double par (double x){
	return x * x;
}

double rec(double x){
	return 3 * x + 4;
}

double e(double x){
	return exp(1 / x);
}

double integral(double liminf, double limsup, double(*f)(double)){
	int res = 0;
	for (double x=liminf; x <= limsup; x+= PASO)
		res += (*f)(x);
	return res * PASO;
}

int main(){
	printf("Integral = %.2lf\n", integral(0., 10., &par));
    return EXIT_SUCCESS;
}
