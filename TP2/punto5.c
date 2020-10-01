#include <stdio.h>
int main()
{
    int x, y, z = 0, cont = 0, sum = 0;

    printf("Ingrese un numero : \n ");
    scanf("%d", &x);
    printf("Ingrese otro numero : \n ");
    scanf("%d", &y);

    z = (y - x) - 1;
    printf("las cantidad de numeros es : %d \n", z);

    while (x <= y)
    {
        if (x % 2 == 0)
        {
            cont++;
        }
        else
        {
            sum = sum + x;
        }
        x++;
    }

    printf("las cantidad de numeros pares es : %d \n", cont);
    printf("La suma de numeros impares es  : %d \n", sum);
    return 0;
}

// SI SE INGRESAN 2 NÚMEROS IGUALES TE DICE QUE HA -1.
// EN NINGÚN MOMENTO CUÁL NÚMERO ES MAYOR QUE EL OTRO PARA HACER LA RESTA.
// SI QUERÉS ASUMIR QUE EL PRIMER NÚMERO TIENE QUE SER MENOR QUE EL SEGUNDO ACLARALO
