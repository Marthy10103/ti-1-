#include <stdio.h>
#include "funciones.h"

int main(int argc, char *argv[]) {
    float a, b, c, d, e, f;  // Variables para las distancias entre puntos
    float perim, areaTotal;  // Variables para el perímetro y el área
    float puntos[4][3];      // Matriz para almacenar las coordenadas de los 4 puntos en 3D

    // Solicitar al usuario las coordenadas de cada punto
    printf("Ingrese las coordenadas de los puntos en formato 3D:\n");
    puntos[0][0] = ingresarComponente('X', 1);
    puntos[0][1] = ingresarComponente('Y', 1);
    puntos[0][2] = ingresarComponente('Z', 1);
    puntos[1][0] = ingresarComponente('X', 2);
    puntos[1][1] = ingresarComponente('Y', 2);
    puntos[1][2] = ingresarComponente('Z', 2);
    puntos[2][0] = ingresarComponente('X', 3);
    puntos[2][1] = ingresarComponente('Y', 3);
    puntos[2][2] = ingresarComponente('Z', 3);
    puntos[3][0] = ingresarComponente('X', 4);
    puntos[3][1] = ingresarComponente('Y', 4);
    puntos[3][2] = ingresarComponente('Z', 4);

   
    distancias(&a, &b, &c, &d, &e, &f, puntos);

    
    perim = perimetro(a, b, c, d, e, f);

    
    areaTotal = area(a, b, e, c, d, f);

    
    imprimir(perim, areaTotal);

    return 0;
}
