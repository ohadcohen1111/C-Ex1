#include<stdio.h>
#include "myMath.h"

double Exp(int x){
    double res = 1;
    double e = 2.71828;
    for(int i = 0; i < x; i++){
        res *= e;
    }

    return res;
}
double Pow(double x, int y){
    double res = 1;
    for(int i = 0; i < y; i++){
        res *= x;
    }
    return res;
}
