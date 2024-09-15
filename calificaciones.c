#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define limiteCalificaciones 50

int main()
{
    float num;
    float calificaciones[limiteCalificaciones];
    int i;
    int totalCalificaciones;
    float promedio = 0;
    bool bandera = true;

    for (i = 0; i < limiteCalificaciones; i++)
    {
        calificaciones[i] = 0;
    }
    
    printf("En este programa podras ingresar calificaciones del 1 al 10\n");
    printf("Te ayudara a conocer su equivalencia en: A, B, C, D.\n");
    printf("Si ingresas un numero negativo, el programa finalizara\n y obtendras el promedio general de tus calificaciones y su equivalencia\n");

    i = 0;
    while (bandera)
    {
        printf("\n");
        printf("Ingresa la calificacion:  ");
        scanf("%f", &num);

        if (num >= 9 && num <= 10)
        {
            printf("Tu %f equivale a que obtuviste A", num);
        }
        else if (num >= 7 && num < 9)
        {
            printf("Tu %f equivale a que obtuviste B", num);
        }
        else if (num >= 5 && num < 7)
        {
            printf("Tu %f equivale a que obtuviste C", num);
        }
        else if (num >= 0 && num < 5)
        {
            printf("Tu %f equivale a que obtuviste D", num);
        }
        else if (num < 0)
        {
            printf("\nEl programa finalizo");
            printf("");
            bandera = false;
            break;
        }
        else
        {
            printf("el numero que ingresaste no es correcto, intentalo de nuevo");
            continue;
        }

        calificaciones[i] = num;
        i++;
    }
    
    totalCalificaciones = i;
    for (i = 0; i < totalCalificaciones; i += 1)
    {
        promedio += calificaciones[i];
    }
    promedio = promedio / totalCalificaciones;

    printf("\n");
    
      if (promedio >= 9 && promedio <= 10)
        {
            printf("Promedio: %f, equivale a que obtuviste A", promedio);
        }
        else if (promedio >= 7 && promedio < 9)
        {
            printf("Promedio: %f, equivale a que obtuviste B", promedio);
        }
        else if (promedio >= 5 && promedio < 7)
        {
            printf("Promedio: %f, equivale a que obtuviste C", promedio);
        }
        else if (promedio >= 0 && promedio < 5)
        {
            printf("Promedio: %f, equivale a que obtuviste D", promedio);
        }
    printf("\n");
    return 0;
}
