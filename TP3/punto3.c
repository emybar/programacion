
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int es_vocal(char carac);
// Todo lo que hacés acá en main debería ser tu función, incluída la función es_vocal
// Fijate que el ejercicio te pide que el main sea como te pongo a continuación.
// Si seguís el otro programa instrucción por instrucción te vas a dar cuenta lo que te comenté.
// Fijate que en el grupo de consulta yo subí 2 archivos para que configuren el VSCode para que lo puedan ejecutar así, viendo el valor de las variables paso a paso
// Si no podés configurarlo avisame

// int main()
// {
// 	transformar();
// 	return 0;
// }

int main()
{
	char carac;			
	int nroletra = 0;
	printf("Ingrese una oracion \n");
	scanf("%c", &carac);
	while (carac != '.')
	{
		if (nroletra == 0 && es_vocal(carac))
		{

			carac = toupper(carac);
		}
		nroletra++;
		if (carac == ' ')
			nroletra = 0;
		printf("%c", carac);
		scanf("%c", &carac);
	}
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
