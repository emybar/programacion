#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void datos(char *p_apynom, int *cant_ape, int *cant_nom);

int main()
{
    char apeynom[50];
    int cant_ape = 0, cant_nom = 0;

    puts("INGRESE SU APELLIDO Y NOMBRE COMPLETOS SEPARDOS POR UNA COMA EJ : VEGA,JULIETA");
    gets(apeynom);

    datos(apeynom, &cant_ape, &cant_nom);

    printf("\nCantidad de Apellidos es  %d", cant_ape);
    printf("\nCantidad de NOMBRES es  %d\n", cant_nom);
    // no mostrás la transformación a mayúsculas de los apellidos
    puts(apeynom); // lo agregué para ver la modificación
    return 0;
}
void datos(char *p_apynom, int *cant_ape, int *cant_nom)
{
    // no inicializás los contadores en 0, no podés confiar en que
    // te los van a mandar en 0 desde el programa principal. imaginate
    // si quiero reutilizar la función para una lista de nombres
    // como los modificaste, ya no van a volver a 0,
    // salvo que se ocupe el programa que lo invoque.
    while (*p_apynom != ',')
    {
        if (*p_apynom != ' ')
            *p_apynom = toupper(*p_apynom);
        else
        {
            if (*p_apynom == ' ')
            {
                *cant_ape = *cant_ape + 1;
            }
        }
        p_apynom++;
    }
    *cant_ape = *cant_ape + 1;

    while (*p_apynom != '\0')
    {
        if (p_apynom[0] == ' ' && isalpha(p_apynom[1]))
        {
            *cant_nom = *cant_nom + 1;
        }

        p_apynom++;
    }
}
