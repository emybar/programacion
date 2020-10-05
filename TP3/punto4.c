/*/ Algoritmo bisiesto
entrada: anioo:real
salida : mensaje

1-Inicializar anio<- 0
2-Leer anio
3-Verificar_bisiesto
3.1 Mientras (anio>999 )
    Si(es_bisiesto(anio)==V){
    mendaje <-Es un anio bisiesto 
    }else{
    mensaje<- No es anio bisiesto   
        }
    Leer anio
3-Parar

//////////////////////////////////
funcion es_bisiesto
argumento :anio real
salida :entero 
if (anio%4==0 && anio%100 !=0 || anio%400==0){
        bisiesto <-v;
    }else{
        bisiesto <- F;
    }
///////////////////////////////////
/*/


#include <stdio.h>
#include <stdbool.h>

bool es_bisiesto(int anio);

int main (){
    int anio=0;
        printf("Ingrese un anio : \n");
            scanf("%d",&anio);
        while(anio>999){
            if(es_bisiesto(anio)==1){
            printf("Es un anio bisiesto %d \n", anio);
            }else{
            printf("No es un anio bisiesto %d \n", anio);
            
        }
        printf("Ingrese un anio : \n");
            scanf("%d",&anio);
        }
            return 0 ;
}

        
bool es_bisiesto (int anio){

    if (anio%4==0 && anio% 100 !=0 || anio%400==0){
        return 1;
    }else{
        return 0 ;
    
    }
}