#include <stdio.h>

//referenciación: Es la obtención de la dirección de una variable

int main() {
    int dir_var = 15;
    printf("La dirección de dir_var es: " "%p\n", &dir_var);
    return 0;
}