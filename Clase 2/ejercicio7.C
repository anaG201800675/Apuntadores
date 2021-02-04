#include <stdio.h>

//Ejercicio 7 - Ana García

int main() {
    
    float *ptr_float;
    printf("El valor apuntado por ptr_float es de %f", *ptr_float); //El apuntador no tiene ninguna dirección de memoria asignado, así que no se le puede usar
    *ptr_float =10.5; //no hace nada, se genera una dirección inválida. 
    
    return 0;
}

--------Lo que imprime ---------

 clang-7 -pthread -lm -o main main.c
 ./main
El valor apuntado por ptr_float es de 0.000000 

