#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base;
    int altura;
    int perimetro;
    int area;
    printf("Ingrese la base y latura\n");
    scanf("%d", & base);
    scanf("%d", & altura);
    perimetro = (base*2 + altura*2);
    area = (base*altura);
    printf("El perimetro es %d", perimetro);
    getchar ();
    printf(" Y el area es %d", area);
    getchar ();
    getchar ();
    return 0;
}
