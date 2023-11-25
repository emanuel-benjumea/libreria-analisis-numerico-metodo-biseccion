
/* 
 * File:   bisection.h
 * Author: Emanuel
 *
 * Created on 20 de noviembre de 2023, 7:36 p. m.
 */

#ifndef BISECTION_H
#define BISECTION_H

#ifdef __cplusplus
extern "C" {
#endif

double bisection(double (*func)(double), double a, double b, double tol);



#ifdef __cplusplus
}
#endif

#endif /* BISECTION_H */

