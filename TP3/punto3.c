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
<<<<<<< HEAD
char transformar(char carac);
bool es_vocal (char carac);
=======

int es_vocal(char carac);
// Todo lo que hacés acá en main debería ser tu función, incluída la función es_vocal
// Fijate que el ejercicio te pide que el main sea como te pongo a continuación.
// Si seguís el otro programa instrucción por instrucción te vas a dar cuenta lo que te comenté.
// Fijate que en el grupo de consulta yo subí 2 archivos para que configuren el VSCode para que lo puedan ejecutar así, viendo el valor de las variables paso a paso
// Si no podés configurarlo avisame
>>>>>>> 0a8780fb5ecea7c1df6b179659048977387be90f

// int main()
// {
// 	transformar();
// 	return 0;
// }

int main()
{
	char carac;			
	int nroletra = 0;
<<<<<<< HEAD
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
    
=======
	printf("Ingrese una oracion \n");
	scanf("%c", &carac);
	while (carac != '.')
	{
		if (nroletra == 0 && es_vocal(carac))
		{

>>>>>>> 0a8780fb5ecea7c1df6b179659048977387be90f
			carac = toupper(carac);
		}
		nroletra++;
		if (carac == ' ')
			nroletra = 0;
		printf("%c", carac);
		scanf("%c", &carac);
	}
<<<<<<< HEAD
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

=======
	printf(".");
	return 0;
}

int es_vocal(char carac)
{
	if (carac == 'a' || carac == 'e' || carac == 'i' || carac == 'o' || carac == 'u')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
>>>>>>> 0a8780fb5ecea7c1df6b179659048977387be90f
