#include <stdio.h>

int main()
{
    int v[5] = {10, 20, 30, 40, 50};
    int i;
    float m = 0;
    for(i=0; i<5; i++){
        m += v[i];
        //+= faz a soma de todos os valores e atribui a variável
    }
    printf("resultado : %.0f\n", m/5);
}
