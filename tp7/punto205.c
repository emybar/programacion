#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct FECHA
{
    int dia;
    int mes;
    int anio;
};

struct MEDICAMENTO
{
    char nomb_rem[50];
    char forma_farma[50];
    char laborato[50];
    float precio_lista;
    int stock;
    struct FECHA venci;
    char indicacion[100];
};

typedef struct MEDICAMENTO med;

void cargar(med *pmedi);
void mostrar(med *pmedi);
int modificar(med *pmedi);
void cargar_inve(med *arreglo, int cant);
void mostrar_inve(med *arreglo, int cant);
void cant_tipo(med *arreglo, int cant);
void mod_arr(med *arreglo, char *cadena, int cant);

int main()
{

    med descrip, inventario[10], *p_inventario;
    int canti;
    char remedio[50];

    p_inventario = inventario;

    //cargar(&descrip);
    //mostrar (&descrip);
    //modificar (&descrip);

    fflush(stdin);

    printf("Ingresar la cantidad de medicamentos a cargar : ");
    scanf("%d", &canti);
    cargar_inve(p_inventario, canti);
    printf("\n");
    mostrar_inve(p_inventario, canti);
    printf("\n");
    cant_tipo(p_inventario, canti);
    printf("\n");

    printf("Ingrese medicamento a modificar : \n");
    gets(remedio);
    mod_arr(p_inventario, remedio, canti);

    return 0;
}

void cargar(med *pmedi)
{

    fflush(stdin);

    puts("Ingrese el nombre del medicmaneto :");
    gets(pmedi->nomb_rem);
    fflush(stdin);

    puts("Ingrese la forma farmaceutica : ");
    gets(pmedi->forma_farma);
    fflush(stdin);

    puts("Ingrese el precio de lista : ");
    scanf("%f", &pmedi->precio_lista);
    fflush(stdin);

    puts("Ingrese el stock: ");
    scanf("%d", &pmedi->stock);
    fflush(stdin);

    puts("Ingrese el dia del vencimiento: ");
    scanf("%d", &pmedi->venci.dia);

    puts("Ingrese el mes del vencimiento: ");
    scanf("%d", &pmedi->venci.mes);

    puts("Ingrese el anio del vencimiento: ");
    scanf("%d", &pmedi->venci.anio);
    fflush(stdin);
    puts("Indicacion del medicamnento  : ");
    gets(pmedi->indicacion);
    fflush(stdin);
}

void mostrar(med *pmedi)
{
    printf("\n");
    printf("nombre del medicmaneto : %s  \n", pmedi->nomb_rem);
    printf("forma farmaceutica : %s   \n", pmedi->forma_farma);
    printf("precio de lista : %f \n", pmedi->precio_lista);
    printf("stock : %d \n", pmedi->stock);
    printf("fecha del vencimiento :  %d / %d /  %d  \n", pmedi->venci.dia, pmedi->venci.mes, pmedi->venci.anio);
    printf("Indicacion del medicamnento : %s \n", pmedi->indicacion);
}

int modificar(med *pmedi)  // esta función debería ser void. Lo pedido era que lo modifique al precio
{

    if (pmedi->stock < 5)
    {
        pmedi->precio_lista = pmedi->precio_lista + pmedi->precio_lista * 0.1;
    }
    else
    {
        pmedi->precio_lista = pmedi->precio_lista - pmedi->precio_lista * 0.1;
    }

    printf("NUEVO PRECIO del %s \n ", pmedi->nomb_rem);
    printf("precio de lista : %f \n", pmedi->precio_lista);
    return pmedi->precio_lista;
}

void cargar_inve(med *arreglo, int cant)
{

    for (int i = 0; i < cant; i++)
    {

        printf("MEDICAMENTO NUMERO %d: \n", i + 1);
        cargar(arreglo);
        arreglo++;
    }
}

void mostrar_inve(med *arreglo, int cant)
{

    for (int i = 0; i < cant; i++)
    {

        printf("\n");
        printf("MEDICAMENTO NUMERO %d: \n", i + 1);
        mostrar(arreglo);
        arreglo++;
    }
}

void cant_tipo(med *arreglo, int cant)
{
    // la función no debe mostrar la salida por pantalla. Debe devolver el valor, y el módulo que lo invoca es el responsable
    // de utilizar la información
    // lo mejor sería:      int cant_tipo(med *arreglo, int cant);
    int cont = 0;

    // para la indicación deberías haber usado la función strstr, ya que puede estar indicado para más de una patología
    for (int i = 0; i < cant; i++)
    {
        if (strncmp(arreglo[i].forma_farma, "inyectable", 30) == 0 && strncmp(arreglo[i].indicacion, "moquillo", 30) == 0)
        {
            cont++;
        }
    }
    printf("La cantidad de inyectables para el moquillo es:  %d \n ", cont); // esto en la función main
}

void mod_arr(med *arreglo, char *cadena, int cant) // la idea no era modificar un medicamento en particular
// sino recorrer todo el arreglo y lo modifique según el stock
{
    for (int i = 0; i < cant; i++)
    {
        if (strncmp(arreglo[i].nomb_rem, cadena, 30) == 0)
            modificar(arreglo);
        arreglo++;
    }
}