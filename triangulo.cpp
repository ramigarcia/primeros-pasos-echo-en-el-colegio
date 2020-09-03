#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l1;
    int l2;
    int l3;
    int perimetro;
    printf ("Ingrese lados \n");
    scanf ("%d",&l1);
    scanf ("%d",&l2);
    scanf ("%d",&l3);
    perimetro = (l1+l2+l3);
    printf ("el perimetro es %d");
    getchar ();
    getchar ();
    return 0;
}
