#include <stdio.h>

int main() {
 
    int input = 100;
    int max = 0;
    int position = 0;
    int lista[100];
    int i = 0;

    for (i = 0; i < input; i++)
    {
        scanf("%d", &lista[i]);
    }

    for (i = 0; i < lista; i++)
    {
        if (lista[i] >= max)
        {
            max = lista[i];
            position = i;
        }
    }
    printf("%d\n", max);
    printf("%d\n", position + 1);
 
    return 0;
}
