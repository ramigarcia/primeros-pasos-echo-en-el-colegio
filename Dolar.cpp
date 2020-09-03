#include<stdio.h>
#include<stdlib.h>

int main()
{
	int P;
	int D;
	int Dolares;
	printf ("Ingrese P\n");
	scanf("%d", & P);
	printf("Ingrese D\n");
	scanf("%d", & D);
	Dolares = P/D;
	getchar ();
	printf ("el dolar es %d", Dolares);
	getchar ();
	return 0;
}

