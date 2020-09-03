#include<stdio.h>
#include<stdlib.h>

int main()
{
	int Numero1;
	int Numero2;
	int RE;
	int REpor;
	printf("Ingrese Numero1\n");
	scanf("%d", & Numero1);
	printf("Ingrese Numero2\n");
	scanf("%d", & Numero2);
	RE = Numero1+Numero2;
	getchar();
	printf("El resultado de la suma es %d",RE);
	REpor = Numero1*Numero2;
	printf(" Y El de la multiplicacion es %d",REpor);
	getchar();
	return 0;
	
}	
