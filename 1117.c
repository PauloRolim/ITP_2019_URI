#include <stdio.h>

int main(){

    double nota01;
    double nota02;
    int verificador = 0;

    

    do
    {
      scanf("%lf %lf", &nota01, &nota02);

      if (nota01 < 0.0)
      {
          printf("nota invalida");
          
      } else
      {
          verificador++;
      }
      
    
      if (nota02 < 0.0)
      {
          printf("nota invalida");
          
      } else
      {
          verificador++;
      }

    } while (verificador == 2);
    
    
    
    printf(" Nota 1 = %.2lf e Nota 2 = %.2lf", nota01, nota02);
    


    return 0;
}
