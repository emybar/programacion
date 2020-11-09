#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
 
void cont(char cad[]);
int es_vocal (char caracter);


int main(){

    char cad[100];
    //Punt1 declaro local a main la variable punt
    char * punt;

    printf("Ingrese una frase en minuscula: ");
    gets(cad);

    //Punt2
	punt = cad;
    punt = &cad[0];

    //Punt3
	printf("La direccion de punt es: %p \n",punt);
	printf("La direccion de cad[0] es: %p \n",&cad[0]);

    //Punt4
	printf("cad[4](la quinta celda) contiene: %c \n",*(punt+4));
	printf("cad[4](la quinta celda) contiene: %c \n",punt[4]);

    //punt5
	printf("La direccion de punt+3 es: %p \n",(punt+3));
	printf("La direccion de punt+3 contiene: %c \n",*(punt+3));

    //punt6
	puts(punt);
	printf("\n");

    //Punt7
	int i = 0;
	while(punt[i] != '\0') {
		printf("%c",punt[i]);
		i++;
	}
    printf("\n");
	cont_borra(cad);

    return 0 ;

}
void cont(char cad[])  {
    int consonantes = 0, i=0;
        while (cad[i] != '\0') {
        if  (isalpha(cad[i]) && es_vocal(cad[i])==0){
            consonantes++;
            cad[i]= toupper(cad[i]);
       }
         printf("%c",cad[i]);
        i++;
        

    }
   
     printf("\nLa cantidad de consonantes : %d",consonantes);
    
    }

int es_vocal (char caracter){
    switch (caracter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': return 1;
        break;
        default: return 0;
        break;
    }
}
