#include <stdio.h>



struct FECHA
{
    int dia;
    int mes;
    int anio;

};

struct MEDICAMENTO
{
    char nomb_rem [50];
    char forma_farma [50];
    char laborato [50];
    float precio_lista ;
    int stock;
    struct FECHA venci;
    char indicacion [100];
    int cant;
};

typedef struct MEDICAMENTO med;


void cargar( med  *pmedi );
void mostrar( med  *pmedi );
int modificar ( med *pmedi);

int main (){

    med descrip;
     
     cargar(&descrip);
     mostrar (&descrip);
     modificar (&descrip);


   
    return 0;

}

void cargar( med  *pmedi  ){

puts("Ingrese el nombre del medicmaneto :");
gets (pmedi-> nomb_rem );
fflush(stdin);

puts("Ingrese la forma farmaceutica : ");
gets (pmedi->forma_farma);
fflush(stdin);

puts("Ingrese el precio de lista : ");
scanf("%f",&pmedi->precio_lista );
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
gets (pmedi->indicacion);
fflush(stdin);

}

void mostrar ( med  *pmedi ){
    printf("\n");
    printf("nombre del medicmaneto : %s  \n",pmedi-> nomb_rem );
    printf("forma farmaceutica : %s   \n",pmedi->forma_farma);
    printf("precio de lista : %f \n",pmedi->precio_lista);
    printf("stock : %d \n",pmedi->stock );
    printf("fecha del vencimiento :  %d / %d /  %d  \n",pmedi->venci.dia,pmedi->venci.mes,pmedi->venci.anio);
    printf("Indicacion del medicamnento : %s \n",pmedi->indicacion);

}

int modificar (med *pmedi){
    if (pmedi->stock < 5){
        pmedi->precio_lista = pmedi->precio_lista + pmedi->precio_lista * 0.1;

}else{
    pmedi->precio_lista = pmedi->precio_lista -  pmedi->precio_lista * 0.1;

}

printf("///////////////NUEVO PRECIO ///////////// \n ");
printf("precio de lista : %f \n",pmedi->precio_lista);
return pmedi->precio_lista;

}