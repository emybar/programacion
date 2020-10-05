/*/  Algoritmo transformar
entrada carac: cc , nroletra entero
salida : oracion cc

1 Inicializar nroletra=0
2- Transformar(carac)
3.Escribir carac
4-Parar

 //// funcion transformar///
entrada: carac
salida :cc
while(carac <>'.') {
        if(nroletra = 0 ^ es_vocal(carac) ) {
    
			carac <-- toupper(carac);
		}
		nroletra++;
		if(carac = ' ')
			nroletra <--0;

///funcion es_vocal/////
entrada: carac
salida: bool
    if (carac="a" V carac="e"V carac="i" V carac="o" V carac="u"){
            es_vocal <--- V
        }else{
            es_vocal <---F 
        }
/*/


#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
char transformar(char carac);
bool es_vocal (char carac);

int main(){
    char carac;
	int nroletra = 0;
    printf("Ingrese una oracion \n");
	scanf("%c",&carac);

    printf("%c",transformar(carac));
	scanf("%c",&carac);
    return 0 ;
}

char transformar(char carac){
    int nroletra = 0;
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
    return carac;
}

bool es_vocal(char carac){
        if (carac=='a'|| carac=='e'|| carac=='i'|| carac=='o'||carac=='u'){
            return 1; 
        }else{
            return 0 ;
        }
} 

