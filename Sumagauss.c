#include <stdio.h>
int main ()
{
    int numeroentero;
    int suma=0;
    printf("En este programa podras saber el resultado de una suma de gauss\n");
    printf("Ingrese hasta que numero desea que se sume, debe ser positivo\n");
    scanf("%d", &numeroentero);
    if (numeroentero>0)
    {
        for (int i = 1; i <= numeroentero; i++)
        {
            suma=suma+i;
        }
        printf ("El resultado de la suma de Gauss %d es %d\n", &numeroentero, &suma);  
    }
    else 
    {
        printf ("Solo deben ser numeros positivos");
    }
    
    return 0;
}
