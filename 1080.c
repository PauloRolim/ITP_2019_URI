#include <stdio.h>
#include <stdlib.h>

int main (){


    int lista[10];
    int i;
    int maior[10];

    srand(time(NULL));

  /*  for (i = 0; i <= 10; i++)
    {
        lista[i] = 0;
    }*/
    
    for (i = 0; i <= 10; i++)
    {
        lista[i] = rand() % 100; 
    }

    

    
    for (i = 0; i <= 10; i++)
    {
        printf("lista[%d] = %d\n", i, lista[i]);

    }
           
    return 0;
}
