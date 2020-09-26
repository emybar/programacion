#include <stdio.h>
int main() {
           int horas=0, minutos=0, segundos=0, total=0;

            printf("\nIngrese horas = ");
            scanf("%d",&horas);    
            printf("\nIngrese minutos = ");
            scanf("%d",&minutos);
            printf("\nIngrese segundos = ");
            scanf("%d",&segundos);

      if (horas>=0 && horas<=23 && minutos>=0 && minutos<=59 && segundos>=0 && segundos<=59 ){

           total= horas*3600+ minutos*60+ segundos; 

          printf("\nLa hora ingresa en segundos es " "%d  ",total );
 
        }else{
                printf("\n ERROR: La hora es incorrecta." );
       
}
 return 0; 
}