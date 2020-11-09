#include <stdio.h>

int main(){

    int num[5];
    char letra[5];
    char cad[10];
    char *p_letra ;
    char *p_cad ;

    p_letra=letra;
    p_cad=cad;

    for(int i=0; i <5; i++){
        printf("Ingrese un numero - letra : ");
        gets(cad);

        num[i]=  *p_cad - '0'; 
       *p_letra = *(p_cad +2);
        p_letra ++;
        
    }
   
 for (int i = 0; i < 5; i++)
    {
        printf ("%d", num[i]);
    }

*p_letra= '\0';
printf ( "\n");
puts(letra);

return 0;

}