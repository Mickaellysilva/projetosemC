#include <stdio.h>

int main()
{
    int codigo, quantidade;
    float resultado;

    scanf("%d %d", &codigo, &quantidade);

    if (codigo == 1)
    {
        resultado = 4.0 * quantidade;
        printf("Total: R$ %.2f\n", resultado);
    }
    else if (codigo == 2)
    {
        resultado = 4.50 * quantidade;
        printf("Total: R$ %.2f\n", resultado);
    }
    else if (codigo == 3)
    {
        resultado = 5.0 * quantidade;
        printf("Total: R$ %.2f\n", resultado);
    }
    else if (codigo == 4)
    {
        resultado = 2.0 * quantidade;
        printf("Total: R$ %.2f\n", resultado);
    }
    else if (codigo == 5)
    {
        resultado = 1.50 * quantidade;
        printf("Total: R$ %.2f\n", resultado);
    }

    return 0;
}
