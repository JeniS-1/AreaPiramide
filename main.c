#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float p1,p_total, s1, a1, a, b ,c,d,e,f;
    float puntos[4][3];
    puntos[0][0]=ingresarComponente('X',1);
    puntos[0][1]=ingresarComponente('Y',1);
    puntos[0][2]=ingresarComponente('Z',1);
    puntos[1][0]=ingresarComponente('X',2);
    puntos[1][1]=ingresarComponente('Y',2);
    puntos[1][2]=ingresarComponente('Z',2);
    puntos[2][0]=ingresarComponente('X',3);
    puntos[2][1]=ingresarComponente('Y',3);
    puntos[2][2]=ingresarComponente('Z',3);
    puntos[3][0]=ingresarComponente('X',4);
    puntos[3][1]=ingresarComponente('Y',4);
    puntos[3][2]=ingresarComponente('Z',4);

    distancias(&a,&b,&c,&d,&e,&f,puntos);
    perimetro_total(&p1,&s1,a, b, c, d, e, f, &p_total);
    a1 = area(s1, a, b, c, d, e, f);
    printf("El perimetro de la piramide es %f\n",p_total);
    printf("El area de la piramide es %f\n",a1);

    return 0;
}