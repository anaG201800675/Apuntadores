#include <stdio.h>

//referenciación: Es la obtención de la dirección de una variable

int main() {
    int value = 18;
    int *ptr_1, *prt_2;
    ptr_1 = &value;
    ptr_2 = ptr_1;
    
    print("La dirección de memoria para este ejemplo 2, de ptr_2 = %p", ptr_2);
    
    return 0;
}

//Ejercicio 2 - Ana García