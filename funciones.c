#include <stdio.h>
#include <math.h>
#include "funciones.h"

float ingresarComponente(char comp, int i){
    float c;
    printf("Ingrese la componente %c del punto %d: ",comp,i);
    scanf("%f",&c);
    return c;
}

void distancias(float *a, float *b, float *c, float *d, float *e, float *f, float p [4][3]){
    *a=sqrt(pow(p[0][0]-p[1][0],2)+pow(p[0][1]-p[1][1],2)+pow(p[0][2]-p[1][2],2));
    *b=sqrt(pow(p[0][0]-p[2][0],2)+pow(p[0][1]-p[2][1],2)+pow(p[0][2]-p[2][2],2));
    *c=sqrt(pow(p[1][0]-p[2][0],2)+pow(p[1][1]-p[2][1],2)+pow(p[1][2]-p[2][2],2));

    *d=sqrt(pow(p[0][0]-p[3][0],2)+pow(p[0][1]-p[3][1],2)+pow(p[0][2]-p[3][2],2));
    *e=sqrt(pow(p[1][0]-p[3][0],2)+pow(p[1][1]-p[3][1],2)+pow(p[1][2]-p[3][2],2));
    *f=sqrt(pow(p[2][0]-p[3][0],2)+pow(p[2][1]-p[3][1],2)+pow(p[2][2]-p[3][2],2));
}   

void perimetro_total(float *p, float *s,float a, float b, float c, float d, float e, float f, float *p_total) {
    *p=a+b+c; //perimetro base
    *s=*p / 2; //semiperimetro base
    *p_total = *p + (d + e + f); //perimetro total
}

float area(float s, float a, float b, float c, float d, float e, float f){
    float areabase = sqrt(s*(s-a)*(s-b)*(s-c));

    float s1 = (a + d + e) / 2;
    float s2 = (b + e + f) / 2;
    float s3 = (c + d + f) / 2;

    float area_lateral1 = sqrt(s1 * (s1 - a) * (s1 - d) * (s1 - e));
    float area_lateral2 = sqrt(s2 * (s2 - b) * (s2 - e) * (s2 - f));
    float area_lateral3 = sqrt(s3 * (s3 - c) * (s3 - d) * (s3 - f));
    
    return areabase + area_lateral1 + area_lateral2 + area_lateral3;;
}