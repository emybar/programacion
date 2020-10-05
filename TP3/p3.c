
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

char transformar(char carac);

int main()
{
	char carac;
	int nroletra = 0;
	printf("Ingrese una oracion \n");
	scanf("%c", &carac);

	while (carac != '.')
	{

		printf("%c", transformar(carac));
		scanf("%c", &carac);
	}
	printf(".");
	return 0;
}

char transformar(char carac)
{	// Fijate que cada letra que proceses, lo primero que hacés es poner nroletra
	// tu bandera en 0. O sea que para vos, todas las letras comienzan una palabra
	int nroletra = 0;
	if (nroletra == 0)
	{
		if (carac == 'a' || carac == 'e' || carac == 'i' || carac == 'o' || carac == 'u')
		{
			carac = toupper(carac);
		}
		if (carac == ' ')
		{
			nroletra = 0;
		}
	}

	return carac;
}
