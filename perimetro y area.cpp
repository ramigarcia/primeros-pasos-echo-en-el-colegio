#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado1;
    int lado2;
    int lado3;
    int perimetro;
    int base;
    int altura;
    int area;
    printf("Ingrese tres lados\n");
    scanf("%d", & lado1);
    scanf("%d", & lado2);
    scanf("%d", & lado3);
    perimetro = (lado1 + lado2 + lado3);
    printf ("El perimetro es %d", perimetro);
    getchar ();
    printf ("\nIngrese base y altura para saber el area\n");
    scanf ("%d", & base);
    scanf ("%d", & altura);
    area = (base * altura);
    printf ("El area es %d", area);
    getchar ();
    getchar ();
    return 0;
}
