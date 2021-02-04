#include <stdio.h>

//Ana García 201800675
//Ejemplo 12

int main() {
    int lista_arr[5] = {10,20,30,40,50};
    int *lista_ptr; //ambas apuntan al mismo sitio
    lista_ptr = lista_arr;
    printf("%d\n", lista_arr[0]);
    printf("%d\n", lista_ptr[0]);
    return 0;
}