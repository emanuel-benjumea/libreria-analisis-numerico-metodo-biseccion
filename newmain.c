/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   newmain.c
 * Author: Emanuel
 *
 * Created on 20 de noviembre de 2023, 8:36 p. m.
 */

#include <stdio.h>
#include <stdlib.h>
#include "bisection.h" 
#include <math.h>
/*
 * 
 * 
 */
double g(double x) {
    return x * x - 9;  // Cambia la función objetivo si es necesario
}

int main() {
    double a = -5.0;
    double b = 5.0;
    double tol = 0.0001;

    double root = bisection(g, a, b, tol);

    printf("La raíz encontrada es: %lf\n", root);

    return 0;
}