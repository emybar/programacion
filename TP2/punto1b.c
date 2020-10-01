#include <stdio.h>
int main()
{
    int i, j, k, aux;

    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        aux = 0;
        for (k = i + 1; k <= 8; k++)
        {
            aux = aux + 1;
            printf("%d ", aux);
        }
        printf("\n");
       
    }
    return 0;
}
// el resultado es 1 1 2 3 4 5 6 7  j e i  siempre van a ser iguales, el for de la j estaría de más

// 0  1

// HABÍAS PUESTO MAL EL RETURN 0; lO CORRÍ UNA LÍNEA MAS ABAJO. CORRELO AHORA