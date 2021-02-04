#include <stdio.h>

//Ejercicio 5

int main() {
    
    struct Articulo{
        char name[20];
        char description[100];
        float price;
    };
    
    struct Articulo art;
    struct Articulo *ptr_art = &art;
    
    (*ptr_art).price = 50.38;
    ptr_art->price = 50.38;
    
    printf("El precio es %f", ptr_art->price);
    
    return 0;
}

--------El error que imprime ------

 clang-7 -pthread -lm -o main main.c
main.c:11:15: warning: incompatible pointer types assigning to
      'float *' from 'int *' [-Wincompatible-pointer-types]
    ptr_float = &value; //incompatible, da error porque ...
              ^ ~~~~~~
1 warning generated.
 ./main
 ^C
 