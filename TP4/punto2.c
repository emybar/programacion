#include <stdio.h>
#include <string.h>
#include<ctype.h>

#define MAX 50
#define MIN 25 

int main(){

    char dato1[MIN ],dato2[MIN], datoscom[MAX], i=0 , j=0 ; 
        printf("Ingrese Nombre: ");
        gets(dato1);
        printf("Ingrese Apellido:");
       gets(dato2) ;


    while( dato1[i] != '\0'){
        datoscom[i]= toupper(dato1[i]);
        i++;
    }
    datoscom[i] = ' '; 
    i++;
    while(dato2[j] != '\0') {
        datoscom[i+j]= toupper (dato2[j]);
        j++;
    }
        datoscom[i+j]= '\0';
 
        printf("%s",datoscom);

return 0 ;

}

