#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int n2;
    int n3;
    int promedio;
    printf ("Ingrese n1 n2 n3\n");
    scanf ("%d",&n1);
    scanf ("%d",&n2);
    scanf ("%d",&n3);
    promedio = (n1+n2+n3)/3;
    printf ("el promedio es %d", promedio);
    if (promedio > 6)
    {
     printf("Aprobaste");      
    }
    else
    {
     printf(" ,Lamentablemente desaprobaste POR PELOTUDO ES RE FACIL PROGRAMAR");     
    }
    getchar ();
    getchar ();
    return 0;
}
