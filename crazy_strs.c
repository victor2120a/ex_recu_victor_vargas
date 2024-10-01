
// escribe un programa que muestre uno a uno por salida sestandar los caracteres de un string, seguido de una nueva linea en c



    #include <stdio.h>

int main() {
    // Cadena a imprimir
    char str[] = "Examen de Recuperacion";
    
    // Iteramos sobre cada carácter de la cadena
    for (int i = 0; str[i] != '\0'; i++) {
        // Imprime cada carácter seguido de una nueva línea
        printf("%c\n", str[i]);
    }
    
    return 0;
}



