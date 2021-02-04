#include <stdio.h>

//Ana García 201800675
//Ejemplo 11

int main() {
    int v = 21, w = 18;
    const int *ptr = &v;
    ptr = &w;
    //*ptr = 16;
    w = 3;
    return 0;
}