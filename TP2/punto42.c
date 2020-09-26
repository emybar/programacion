#include <stdio.h>
int main(){
        int canta=0,cante=0,canti=0,canto=0,cantu=0, vocalesdis=0,palabras=0;
        char car ;

        printf("Ingrese una oracion: \n");
        scanf("%c",&car);

        while(car != '.') {
            if(car != ' '){
                switch (car)
                {
                case 'a':
                    canta++;
                    break;
                case 'e':
                    cante++;
                    break;
                case 'i':
                    canti++;
                    break;
                case 'o':
                    canto++;
                    break;
                case 'u':
                    cantu++;
                    break;
                
                default:
                    break;
                
            }
            }else{
                printf("*");
            }
                if (canta>0){
                    vocalesdis++;
                }
                if (cante>0){
                    vocalesdis++;
                }
                if (canti>0){
                    vocalesdis++;
                }
                if (canto>0){
                    vocalesdis++;
                }
                if (cantu>0){
                    vocalesdis++;
                }
                if(vocalesdis>3){
                    palabras++;
                }
            canta=0;
            cante=0;
            canti=0;
            canto=0;
            cantu=0;
            vocalesdis=0;
        }
printf("palabras %d ",palabras );
return 0 ;
}      