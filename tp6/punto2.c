#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>

void datos(char *p_apynom, int *cant_ape, int *cant_nom);


int main(){ 
 char apeynom [50];
 int cant_ape =0, cant_nom=0;



 puts("INGRESE SU APELLIDO Y NOMBRE COMPLETOS SEPARDOS POR UNA COMA EJ : VEGA,JULIETA");
 gets(apeynom);

datos(apeynom, &cant_ape,&cant_nom);

printf("\nCantidad de Apellidos es  %d", cant_ape);
printf("\nCantidad de NOMBRES es  %d", cant_nom);

return 0;

    
}
void datos(char *p_apynom, int *cant_ape, int *cant_nom){

       while (*p_apynom != ',') {
             if (*p_apynom != ' ' ) 
                *p_apynom= toupper(*p_apynom);
            else{
                if (*p_apynom == ' '){
                    *cant_ape = *cant_ape + 1;
                }
            }
            p_apynom++;

        }
        *cant_ape = *cant_ape + 1;
        
        while (*p_apynom != '\0'){
            if ( p_apynom[0]== ' ' && isalpha(p_apynom[1])) {
                *cant_nom = *cant_nom + 1;
               
                 
        }
        
          p_apynom++;
}
}


