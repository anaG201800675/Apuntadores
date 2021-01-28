#include <stdio.h>

//Ejercicio 8 - Ana García
//Ejercicio para definir una dirección inválida

int *ptr_int, var;
void init_ptr(){
    int local = 57; 
    ptr_int = &local;
    var = *ptr_int;
    *ptr_int = 23; //misma posición, diferente valor
}

int main() {
    
    init_ptr();
    *ptr_int = 20; //da error porque se modifica fuera de donde debía
    
    return 0;
}