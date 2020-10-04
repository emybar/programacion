
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool es_vocal (char carac);

int main(){
    char carac;
	int nroletra = 0;
    printf("Ingrese una oracion \n");
	scanf("%c",&carac);
	while(carac !='.') {
        if(nroletra == 0 && es_vocal(carac) ) {
    
			carac = toupper(carac);
		}
		nroletra++;
		if(carac == ' ')
			nroletra = 0;
		printf("%c",carac);
		scanf("%c",&carac);
	}
	printf("."); 
}



bool es_vocal(char carac){
        if (carac=='a'|| carac=='e'|| carac=='i'|| carac=='o'||carac=='u'){
            return 1; 
        }else{
            return 0 ;
        }
} 

