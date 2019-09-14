#include <stdio.h>
 
int main() {
 
    double nota01;
    double nota02;
    int cont1 = 0 , cont2 = 0;
    int i = 0;
    int notainvalida = 0;
    double media;

    while (cont1 < 2)
    {
        scanf("%lf", &nota01);
        if (nota01 < 0 || nota01 > 10)
        {
            cont1--;
            notainvalida++;
        } else
        {
            cont1 = 3;
        }
    }
    
    while (cont2 < 2)
    {
        scanf("%lf", &nota02);
        if (nota02 < 0 || nota02 > 10)
        {
            cont2--;
            notainvalida++;
        } else
        {
            cont2 = 3;
        }
        
        
    }
    

    while ( i < notainvalida)
    {
        printf("nota invalida\n");
        i++;
    }
     
    
    media = (double)(nota01 + nota02) / 2;

    printf("media = %.2lf\n", media);
 
    return 0;
}
