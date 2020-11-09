#include <stdio.h>
#include <string.h>

#define MAX 50

int main(){

    char  nombape[MAX ] ;
    int i=0, vocal =0 , vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0 ; 
        printf("Ingreser Nombre  y Apellido: ");
        gets(nombape);
        
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

 return 0 ;

}




