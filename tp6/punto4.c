#include <stdio.h>
#include <string.h>

int buscar(char *cad, char c);
void insertar(char *cad, int pos, char c);

int main()
{

    char cadena[30];
    int pos, busqueda;
    char caracter;
    int cant;

    puts("Ingrese un cadena: \n");
    gets(cadena);

    printf("Ingrese el caracter que quiere buscar: \n");
    scanf("%c", &caracter);
    fflush(stdin);

    busqueda = buscar(cadena, caracter);
    if (busqueda == 1)
    {
        printf("El caracter se encuentra en la cadena \n");
    }
    else
    {
        printf("El caracter no se encuentra en la cadena \n");
    }

    printf("Ingrese la posicion donde desea agregar el caracter: \n");
    scanf("%d", &pos);
    fflush(stdin);

    cant = strlen(cadena);

    if (pos > cant)
    {
        printf("No existe la posicion en la cadena \n"); // podría ser al final de la cadena
        printf("El nuemro maximo es %d \n", cant);
        printf("Ingrese la posicion donde desea agregar el caracter: \n");
        scanf("%d", &pos);
        fflush(stdin);
    }

    printf("Ingrese el caracter: \n");
    scanf("%c", &caracter);
    fflush(stdin);

    insertar(cadena, pos, caracter);
    puts(cadena);

    return 0;
}

int buscar(char *cad, char c)
{
    int ca = 0;
    while (*cad != '\0' && ca == 0)
    {
        if (*cad == c)
        {
            ca = 1;
            return ca;
        }
        cad++;
    }
    return ca;
}

void insertar(char *cad, int pos, char c)
{
    int cant = strlen(cad);
    if (pos <= cant)
    {
        cad[pos - 1] = c;
    }
}

// Esta función reemplaza el caracter, no lo inserta