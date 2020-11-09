#include <stdio.h>

void min_val(float *arre, int longit);
void max_val(float arre[], int *longit);
float promedio(float arre[], int longit);
void sobre_prom(float arre[], int longit);


int main(){
    int i = 0, cant ;
	float * punt2;
    int *punt = &cant;


	printf("Ingrese la cantidad de elementos: \n");
	scanf("%d",&cant);

	float num_array[cant-1];

	while (i < cant) {
		printf("Ingrese un valor: \n");
		scanf("%f",&num_array[i]);
		i++;
	}

	punt2 = num_array;
	max_val(num_array, punt);
	min_val(punt2, cant-1);
	printf("El promedio es: %f \n",promedio(num_array, cant-1));
    sobre_prom(num_array, cant-1);

    return 0; 
}


void max_val(float arre[], int *longit) {
	float max = 0;
	int j = 0;
	while(j <= ((*longit)-1)) {
		if(max < arre[j])
			max = arre[j];
		j++;
	}
	printf("El valor maximo es: %f \n",max);
}

void min_val(float *arre, int longit) {
	float min = 99999.999;
	int j = 0;
	while(j <= longit) {
		if(min > *arre) {
			min = *arre;
		}
		arre++;
		j++;
	}
	printf("El valor minimo es: %f \n",min);
}

float promedio(float arre[], int longit) {
	int j = 0;
	float prom = 0;
	while(j <= longit) {
		prom = prom + arre[j];
		j++;
	}
	return prom = prom/longit;
}

void sobre_prom(float arre[], int longit) {
	int prom = promedio(arre, longit), j = 0, cant = 0;
	while(j <= longit) {
		if(arre[j] > prom) {
			cant++;
			printf("El valor %f, supera \n",arre[j]);
		}
		j++;
	}
	printf("La cantidad de elementos que superan  %d \n",cant);
}