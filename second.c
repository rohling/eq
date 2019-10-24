#include <stdio.h>
#include <stdlib.h>
int main()
{
    int nu1, nu2, result, resto;

    printf("digite un numero 1");
    scanf("%i", &nu1);

    printf("digite un numero 2");
    scanf("%i", &nu2);

    result = nu1/nu2;
    resto = nu1%nu2;
    printf(result, resto);
    return 1;
}
