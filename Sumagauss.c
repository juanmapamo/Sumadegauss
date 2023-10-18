#include <stdio.h>
int main ()
{
    int numeroentero;
    int suma;
    printf("En este programa podras saber el resultado de una suma de gauss\n");
    printf("Ingrese hasta que numero desea que se sume\n");
    scanf("%d", &numeroentero);
    if (numeroentero>0)
    {
        for (size_t i = 1; i < numeroentero; i++)
        {
            suma=suma+i;
        }
        
    }
    printf ("El resultado de la suma es %d\n", &suma);
    return 0;
}