#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
int dadoUno;
int dadoDos;
int suma;
int i;
char respuesta;
bool jugemos = true;
srand(time(NULL));

printf("Bienvenid@ al juego de dados\n");
printf("Las reglas son sencillas, GANAS si al jugar obtienes:\n");
printf("El resultado de tus dados es mayor que 6 y sus valores son impares\n");
printf("De otra forma, pierdes el juego\n");

i = 0;
while (jugemos)
{
    printf("Deseas jugar, selecciona s/n: \n");
    scanf(" %c", &respuesta);
    if (respuesta == 's'){
        dadoUno = 1+rand()%(1-6);
        dadoDos = 1 + rand()%(1-6);
        printf("\n");
        printf("El resultado del primer dado es: %d\n", dadoUno);
        printf("El resultado del segundo dado es: %d\n", dadoDos);
        suma = dadoUno + dadoDos;
            printf("Que empiece el juego...\n");
        printf("La suma de tus dados es: %d\n", suma);
        if (suma > 6){
            printf("Excelente, veamos si tus dados son impares...\n");
            if(dadoUno %2 != 0 && dadoDos %2 !=0){
                printf("Felicidades, has ganado este juego :) \n");
            } else {
                printf("Lo siento, estuviste tan cerca\n");
            }
        } else if (suma <= 6){
            printf("perdiste, lo siento :( \n");
        }

    }
    else if (respuesta == 'n'){
        printf("Gracias por visitar mi juego\n");
        jugemos = false;
        break;
    } 
    else 
    {
        printf("Ingresaste un dato incorrecto, intentalo de nuevo");
        continue;
    }

    
}


}