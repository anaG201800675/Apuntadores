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

//Ej 5 - Ana García