#include <stdio.h>
int main()
{
    int beca, distancia, hijos;
    char mediotransporte, padres;
    //onmnibus=o - transporte escolar=t - pie=p - trabajan=e - desempleado=d

    printf("Ingrese en medio de transporte : Onmnibus= o - Transporte Escolar= t - Pie= p : \n");
    scanf("%c", &mediotransporte);

    if (mediotransporte == 'o')
    {
        beca = 1000;
    }
    else
    {
        if (mediotransporte == 't')
        {
            beca = 500;
        }
        else
        {
            if (mediotransporte == 'p')
            {
                printf("¿ A cuantos km de distancia se encuentran ?:  \n");
                scanf("%d", &distancia);
                if (distancia > 3)
                {
                    getchar();
                    printf("Los Padres trabajan: trabajan= e - Desempleado= d ?:  \n");
                    scanf("%c", &padres);
                    scanf("%c", &padres); //profe lo puse 2 veces porque no seguia con la pregunta

                    if (padres == 'e')
                    {
                        printf("¿Cantidad de hijos ?:  \n");
                        scanf("%d", &hijos);
                        scanf("%c", &hijos);
                        if (hijos > 3)
                        {
                            beca = 3000;
                        }
                    }
                    else
                    {
                        beca = 5000;
                        printf("Reciben el plan ESTUDIAR \n");
                    }
                }
            }
        }
    }
    printf("El Monto de la Beca es : %d", beca);
    return 0;

}

// NO CONTROLÁS QUE PASA SI INGERSAN OTRA LETRA, NO INICIALIZÁS BECA EN 0
// SI NO HAY QUE DAR BECA TE SALE LA BASURA QUE TENGA LA MEMORIA