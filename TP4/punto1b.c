#include <stdio.h>
#define MAX 20


int main(){
    int num[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int i=0,pares=0,impares=0;

   for(i=0;i<MAX;i++){
       if(i%2==0){
           pares=pares + num[i];
       }else{
           impares= impares + num[i];
       }
   
   }
   printf("La suma de las posiciones pares es :%d", pares);
   printf("\n la suma de las posiciones impares es :%d",impares);
     return 0 ;
    
}