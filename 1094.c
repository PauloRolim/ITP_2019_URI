#include <stdio.h>
 
int main() {
 
    char Tipo;
    int j, Quantidade, i, Total = 0, cobaia[3] = {0, 0, 0};
    float valor[3] = {0, 0, 0}, porcento[3] = {0, 0, 0};

    scanf("%d", &j);

    for (i = 0; i < j; i++)
    {
        scanf("%d %c", &Quantidade, &Tipo);
        if (Quantidade >= 1 && Quantidade <= 15)
        {
            Total += Quantidade;
        }
        switch (Tipo)
        {
        case 'C':
            cobaia[0] += Quantidade;
            break;
        case 'R':
            cobaia[1] += Quantidade;
            break;
        case 'S':
            cobaia[2] += Quantidade;
            break;
        }

        Quantidade = 0;
    }

    for (i = 1; i <= 3; i++)
    {
        valor[i - 1] = cobaia[i - 1] * 100;
        porcento[i - 1] = valor[i - 1] / Total;
    }

    printf("Total: %d cobaias\n", Total);
    printf("Total de coelhos: %d\n", cobaia[0]);
    printf("Total de ratos: %d\n", cobaia[1]);
    printf("Total de sapos: %d\n", cobaia[2]);
    printf("Percentual de coelhos: %.2f %%\n", porcento[0]);
    printf("Percentual de ratos: %.2f %%\n", porcento[1]);
    printf("Percentual de sapos: %.2f %%\n", porcento[2]);
 
    return 0;
}
