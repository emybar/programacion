#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// tratá de usar nombres más descriptivos

typedef struct ARBOLES
{
    char especie[50];
    char categoria[50];
    char nomb_vu[60];
    char clima[20];
    int cant_disp;
} arbol;

void cargar(arbol *p_ar);
void cargar_arb(arbol *arre, int cant);
void mostrar(arbol *p_ar);
void mostrar_arb(arbol *arre, int cant);
void dispo(arbol *p_ar);
void mostrar_disp(arbol *arre, char *cadena, int cant);

int main()
{

    arbol tipos, lista[5], *p_lista;
    int cantidad = 0;
    char categoria[50];

    p_lista = lista;

    fflush(stdin);

    printf("Ingresar la cantidad de arboles a cargar : \n");
    scanf("%d", &cantidad);

    cargar_arb(p_lista, cantidad);
    mostrar_arb(p_lista, cantidad);
    printf("\n");

    printf("Ingrese una categoria : \n");
    fflush(stdin);
    gets(categoria);

    mostrar_disp(p_lista, categoria, cantidad);

    return 0;
}

void cargar(arbol *p_ar)
{
    fflush(stdin);

    puts("Ingrese especie o nombre cientifico  :");
    gets(p_ar->especie);
    fflush(stdin);

    puts("Ingrese categoria CADUCA-PERENNE-CONIFERA-FRUTAL:");
    gets(p_ar->categoria);
    fflush(stdin);

    puts("Ingrese nombre vulgar:");
    gets(p_ar->nomb_vu);
    fflush(stdin);

    puts("Ingrese clima SECO-HUMEDO:");
    gets(p_ar->clima);
    fflush(stdin);

    puts("Ingrese la cantidad disponible ");
    scanf("%d", &p_ar->cant_disp);
}

void cargar_arb(arbol *arreg, int cant)
{
    for (int i = 0; i < cant; i++)
    {
        printf("ARBOL NUMERO %d: \n", i + 1);
        cargar(arreg);
        arreg++;
    }
}

void mostrar(arbol *p_ar)
{

    printf("\n");
    printf("ESPECIE DE ARBOL : %s  \n", p_ar->especie);

    printf("CATEGORIA : %s   \n", p_ar->categoria);

    printf("NOMBRE VULGAR: %s \n", p_ar->nomb_vu);

    printf("CLIMA : %s \n", p_ar->clima);

    printf("CANTIDAD DISPONIBLE EN EL ALMACEN : %d \n", p_ar->cant_disp);
}

void mostrar_arb(arbol *arre, int cant)
{
    for (int i = 0; i < cant; i++)
    {
        printf("\n");
        printf("ARBOL NUMERO %d: \n", i + 1);
        mostrar(arre);
        arre++;
    }
}

void mostrar_disp(arbol *arre, char *cadena, int cant)
{

    printf("\n");
    printf("CATEGORIA DISPONIBLE  %s \n", cadena);

    for (int i = 0; i < cant; i++)
    {
        printf("ARBOL %d \n", i + 1);
        if (strncmp(arre[i].categoria, cadena, 40) == 0) 
        // o usás arre[i] y no incrementás el puntero
        // o usás arre-> e incrementás el puntero. Si hacés las 2 cosas vas salteando un árbol
        {
            if (arre->cant_disp < 3)
            {
                arre->cant_disp = arre->cant_disp + 5;
            }

            mostrar(arre);
        }
        arre++;
    }
}