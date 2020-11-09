#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 500

void invertir_frase( char *frase, int tam );

int main(){
    int  tam,i ;
    char frase[MAX];
    printf("Ingrese una frase :", frase); 
    gets(frase);
        
        tam= strlen(frase); 
        printf("El tamanio es %d \n", tam);

        invertir_frase (frase, tam);


    return 0 ;
}

void invertir_frase( char *frase, int tam ){

    char aux;
    int i=0, j=tam-1;

    for(i=0;i < j ;i++){
        aux= frase[j];
        frase[j]= frase[i];
        frase[i]=aux ;
        j--;
}
for (int cont=0; cont < tam ; cont++){
    printf("%c", frase[cont]);
}

}