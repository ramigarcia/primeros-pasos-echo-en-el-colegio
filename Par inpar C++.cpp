#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero;
	int basura;
	printf ("Ingrese su numero\n");
	scanf ("%d", & numero);
	basura = numero %2;
	if (basura == 0)
	{
		printf("par");
	}
	else{
		printf("impar");
	}
	getchar ();
	return 0;
}
