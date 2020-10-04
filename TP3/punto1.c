/*/ Algoritmo invertir
entrada num real
salida inv : real

1 Inicializar num<--o inv <--0
2 Invertir
3 Finalizar

////funcion invertir_num(num)////
argumento :num
salida entero 
inv <---0
Mientras (num > 0) 
    leer num 
    inv=inv * 10 + (num % 10);
    num = num / 10; 

/*/


#include <stdio.h>

int invertir_num( int num);

int main (){
    int num=0,inv=0;
     printf("Ingrese numero : \n");
     scanf("%d",&num);


printf("NUMERO INVERTIDO %d", invertir_num(num));
return 0 ;
}

int invertir_num( int num){
    int inv=0;
   while(num>0){
    inv=inv * 10 + (num % 10);
    num = num / 10;
 }
 return inv;
}