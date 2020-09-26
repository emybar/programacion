#include <stdio.h>
int main(){
        int canta=0, cante= 0, canti= 0, canto= 0,cantu= 0 , cantt= 0;
	    char car;

	    printf("Ingrese una oracion:  \n");
	    scanf("%c",&car);

	while(car != '.') {
		if (car == 'a')
			canta = canta + 1;
		if (car == 'e')
			cante = cante + 1;
		if (car == 'i')
			canti = canti + 1;
		if (car == 'o')
			canto = canto + 1;
		if (car == 'u')
			cantu = cantu + 1;

		
		scanf("%c",&car);
	}
	cantt = canta + cante + canti + canto + cantu;

	printf("La cantidad de 'a': %d \n",canta);
	printf("La cantidad de 'e': %d \n",cante);
    printf("La cantidad de 'i': %d \n",canti);
	printf("La cantidad de 'o': %d \n",canto);
    printf("La cantidad de 'u': %d \n",cantu);
	printf("La cantidad de 'a,e,i,o,u': %d \n",cantt);
	
	return 0;



}
