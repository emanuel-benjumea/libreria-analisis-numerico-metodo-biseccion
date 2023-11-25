/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: Emanuel
 *
 * Created on 20 de noviembre de 2023, 7:25 p. m.
 */
#include "bisection.h"
#include <stdio.h>
#include <math.h>

// Definición de la función objetivo
double f(double x) {
    // Cambia la función objetivo a f(x) = x^2 * x - 4
    return x * x * x - 4;
}

// Método de bisección
double bisection(double (*func)(double), double a, double b, double tol) {
    if (func(a) * func(b) >= 0) {
        printf("El método de bisección no es aplicable en este intervalo.\n");
        return 0.0;
    }

    double c;
    while ((b - a) / 2.0 > tol) {
        c = (a + b) / 2.0;
        if (func(c) == 0.0) {
            break;
        } else if (func(c) * func(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    return c;
}
