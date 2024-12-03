#include <stdio.h>
#include <math.h>

float ingresarComponente(char comp, int punto) {
    float valor;
    printf("Ingrese la componente %c del punto %d: ", comp, punto);
    scanf("%f", &valor);
    return valor;
}


void distancias(float *a, float *b, float *c, float *d, float *e, float *f, float p[4][3]) {
    *a = sqrt(pow(p[0][0] - p[1][0], 2) + pow(p[0][1] - p[1][1], 2) + pow(p[0][2] - p[1][2], 2));
    *b = sqrt(pow(p[1][0] - p[2][0], 2) + pow(p[1][1] - p[2][1], 2) + pow(p[1][2] - p[2][2], 2));
    *c = sqrt(pow(p[2][0] - p[3][0], 2) + pow(p[2][1] - p[3][1], 2) + pow(p[2][2] - p[3][2], 2));
    *d = sqrt(pow(p[3][0] - p[0][0], 2) + pow(p[3][1] - p[0][1], 2) + pow(p[3][2] - p[0][2], 2));
    *e = sqrt(pow(p[0][0] - p[2][0], 2) + pow(p[0][1] - p[2][1], 2) + pow(p[0][2] - p[2][2], 2));
    *f = sqrt(pow(p[1][0] - p[3][0], 2) + pow(p[1][1] - p[3][1], 2) + pow(p[1][2] - p[3][2], 2));
}


float perimetro(float a, float b, float c, float d, float e, float f) {
    return a + b + c + d + e + f;
}

float area(float a, float b, float e, float c, float d, float f) {
    
    float s1 = (a + b + e) / 2;
    float area1 = sqrt(s1 * (s1 - a) * (s1 - b) * (s1 - e));

    
    float s2 = (c + d + f) / 2;
    float area2 = sqrt(s2 * (s2 - c) * (s2 - d) * (s2 - f));

    
    float areaTotal = area1 + area2;
    return areaTotal;
}

void imprimir(float perimetro, float area) {
    printf("El valor del perimetro es: %f\n", perimetro);
    printf("El valor del area es: %f\n", area);
}
