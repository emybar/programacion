#include <stdio.h>
#include<ctype.h>
#define max 50

int main()
{   char nom[50];
    char acro[7];
    char *p_nom; 
    char *p_acro;

    printf("Ingrese el nombre de la entidad:");
  
    gets(nom);

    p_nom = nom;
    p_acro = acro;
    while (*p_nom != '\0')
    {
        while(*p_nom == ' '){
            p_nom++;
        }
        // Acá deberías controlar que sea una letra. Puede haber salido por algún
        // símbolo o fin de cadena

        *p_acro = toupper(*(p_nom++));
        p_acro++;
        *p_acro = '.';
        p_acro++;
        while (*p_nom != ' ' && *p_nom != '\0')
        {
            p_nom++;
        }
    }
    *p_acro = '\0';
    puts(acro);
    
    return 0;
}