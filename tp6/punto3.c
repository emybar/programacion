#include <stdio.h>
#include <stdlib.h>

void caudal_llu(float *p_caudal, float *men, float *may, float *prom, int tam);

int main()
{

    float may = 0, men = 99999.9999, prom = 0;
    float *p_caudal;
    int tam;

    printf("Ingrese el nummero de dias \n");
    scanf("%d", &tam);

    p_caudal = malloc(tam * sizeof(float));

    for (int i = 0; i < tam; i++)
    {
        printf("DIA NUMERO %d \n", i + 1);
        printf("Ingrese la medicion lluvia \n");
        scanf("%f", &p_caudal[i]);
        fflush(stdin);
    }

    caudal_llu(p_caudal, &men, &may, &prom, tam);
    printf("La menor cantidad de lluvia fue: %.2f \n", men);
    printf("La mayor cantidad de lluvia fue: %.2f \n", may);
    printf("Promedio de lluvia caida en %d dias fueron : %.2f \n", tam, prom);

    free(p_caudal);
    return 0;
}

void caudal_llu(float *caudal, float *men, float *may, float *prom, int tam)
{
    // lo mismo que en el otro punto. Las inicializaciones de los acumuladores 
    // o contadores de las funciones deben ser inicializadas en la función
    // y no en el programa que lo invoca
    float suma = 0;

    for (int i = 0; i < tam; i++)
    {
        {
            if (*caudal > *may)
            {
                *may = *caudal;
            }
            if (*caudal < *men)
            {
                *men = *caudal;
            }
            suma = suma + *caudal;
            caudal++;
        }
    }
    *prom = suma / tam;
}