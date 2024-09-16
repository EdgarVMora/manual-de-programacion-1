#include <stdio.h>
#include <string.h>
#define limiteCaracteres 100

int main() {
    int i;
    int totalPalabras = 0;
    char texto[limiteCaracteres];
    char textoAlReves[100];
    

    printf("Bienvenido a este programa.\n");
    printf("Aqui podras introducir una linea de texto de no mas de 99 caracteres.\n");
    printf("Iniciemos el programa.\n");
    printf("\n");

    printf("Ingresa una linea de texto:\n");
    fgets(texto, sizeof(texto), stdin);
    printf("\n");
    printf("Excelente, el programa a leido lo siguiente:\n%s", texto);
    int longitud = strlen(texto) - 1;
    printf("\n");
    printf("Lo que al reves seria: ");
    for(i = longitud; i >= 0; i--){
        printf("%c", texto[i]);
    }
    printf("\n");
    //obtener el total de caracteres de la linea de texto
     int totalCaracteres = longitud;
    printf("\nEl numero total de caracteres que tiene tu linea de texto es: %d", totalCaracteres);
    printf("\n");
    //obtener el numero de palabras que tiene la linea de texto
    if(strlen(texto) > 0){
        totalPalabras = 1;
    }

    for(i=0; i < strlen(texto); i++){
        if(texto[i] == ' ' && texto[i+1] != ' ' && texto[i+1] != '\0'){
            totalPalabras++;
        }
    }
    printf("\nEl numero de palabras que tiene tu linea de texto es: %d", totalPalabras);
    printf("\n");

return 0;
}