#include <stdio.h>

int main(){
 int i;
 int j;
 int n;
 int cambio;
 
   
   printf("Bienvenido a este programa\n");
   printf("Aqui podras ordenar un arreglo de numeros enteros en orden desendente\n");
   printf("Iniciemos, de que tamaño quieres que sea tu arreglo: \n");
   scanf("%d",&n);
   int orden[n];
   printf("\n");
   printf("Excelente, ahora ingresa los numeros enteros a tu arreglo\n");   
   for(i=0;i<n;i++)
      {
       printf("Numero[%d]: ",i);
       scanf("%d",&orden[i]);
       printf("\n");      
      }
   printf("Asi es como se ve tu arreglo:\n");
   printf("[");
   for(i=0;i<n;i++)
      {
       printf("%d, ",orden[i]); 
      }
   printf("]\n");  
  
   for(i=0;i<n-1;i++)
     {
      for(j=i+1;j<n;j++)
         {
          if(orden[j]<orden[i])
             {
              cambio=orden[j];
              orden[j]=orden[i];
              orden[i]=cambio;       
             }      
         }  
     } 
  
  printf("\nY aqui esta tu arreglo ordenado:\n");
   printf("[");
   for(i=0;i<n;i++)
      {
       printf("%d, ",orden[i]); 
      }
   printf("]\n");
 
    
}