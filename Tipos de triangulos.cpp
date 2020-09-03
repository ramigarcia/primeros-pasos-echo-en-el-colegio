#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int lado1;
	int lado2;
	int lado3;
	printf ("Ingrese 3 lados\n");
	scanf ("%d", & lado1);
	scanf ("%d", & lado2);
	scanf ("%d", & lado3);
	if (lado1 = lado2){
		if (lado3 == lado1){
			printf("el triangulo es equilatero");}
			else{
					printf ("el triangulo es isoseles");
				}
	}
	else{
		printf("escaleno");
	}
	return 0;
}
