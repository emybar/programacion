#include <stdio.h>
#include <string.h>

#define MAX 200
#define MIN 100

int contarvoc ( char *nombape );

int main(){
    int mayor= 999, alumnos;
    char nombape[MIN] ;
    int  maximo=0;
    char nom_maximo[MAX];
     int j=0;
     int i=0,vocal =0 ; 
      
            printf("Ingrese el numero de alumnos : ");
            scanf("%d",&alumnos);

            for(int i=0;i<alumnos;i++){
                fflush(stdin);
                printf("Ingreser Nombre  y Apellido: ");
                gets(nombape);
                vocal = contarvoc (nombape);
            if (vocal>maximo){
                maximo=vocal;
                strncpy(nom_maximo,nombape,MAX);
        }  
 }
        printf("El estudiante con maximo numero de vocales es : %s \n", nom_maximo);
 
    return 0;
}


    int contarvoc ( char *nombape ){
        int i=0,vocal =0 ,vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0 ; 
        for(i=0;i<nombape[i];i++){
            switch (nombape[i])
            {
            case 'a':
                vocal_a++;
                break;
            case 'A':
            vocal_a++;
                break;
            case 'e':
                vocal_e++;
                break;
            case 'E':
            vocal_e++;
                break;
            case 'i':
                vocal_i++;
                break;
            case 'I':
            vocal_i++;
                break;
            case 'o':
                vocal_o++;
                break;
            case 'O':
            vocal_o++;
                break;
            case 'u':
                vocal_u++;
                break;
            case 'U':
            vocal_u++;
                break;
            default:
                break;
            }
            
        }
        vocal= vocal_a + vocal_e + vocal_i + vocal_o + vocal_u; 
        printf("La cantidad de vocales a es : %d \n ", vocal_a);
        printf("La cantidad de vocales e es : %d \n ", vocal_e);
        printf("La cantidad de vocales i es : %d \n ", vocal_i);
        printf("La cantidad de vocales o es : %d \n ", vocal_o);
        printf("La cantidad de vocales a es : %d \n ", vocal_u);
        printf("La cantidad de vocales es : %d \n ", vocal);

    return vocal;
}




