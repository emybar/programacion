/*/Algoritmo es_perfecto
entrada: n : real 
salida: mensaje :cc 
1 Inicializar i<-0 n<-0 sum<-0
2 Verificar_num
2.1 Hacer 100 veces
   Leer n  
     2.2 Si (es_perfecto (n)=V)
                mensaje<-- Es perfecto
        Sino 
                mensaje <-- No es perfecto
        
        Fin hacer
3 Finalizar 

//////////funcion es_perfecto///////
argumento: n
salida : bool
v.aux: i
sum<--0
Hacer n veces (i=1....n)
    Si (RESTO(n,i) = 0))
        es_perfecto<-- V
    Sino 
        es_perfecto <---F 

/*/


#include <stdio.h>
#include <stdbool.h>

bool es_perfecto (int n);

int main() {
        int i=0,n=0, sum=0; 
        for(n = 1; n < 100; n++){
		if(es_perfecto (n) == 1){
                        printf(" Es un numero perfecto %d", n);
                }else{
                        printf(" \n No es un numero perfecto %d ",n);
                }
        }
        return 0; 
}


bool es_perfecto (int n){
        int i=0,sum=0 ;
        for(i= 1; i < n; i ++){
                if(n % i == 0)
    	            sum += i;
        }
        if (sum==i){
                return 1;
        }else{
                return 0; 
        }
} 


