#include <stdio.h>

#define TAMA 200
// Te faltó hacer la modificación para vectores de distintos tamaños y distintos 
// valores del múltiplo
int main(){

int i , vectorNumero[TAMA] , cont=0;

    for (i=1;i<TAMA;i++){
        if (i%2==0 && i%3==0){
                vectorNumero[cont]=i;
                cont++;

        }
}
    for(int j=0;j<cont;j++){
        printf("\n vectorNumero[%d]=%d",j,vectorNumero[j]);

}

return 0 ;
}

