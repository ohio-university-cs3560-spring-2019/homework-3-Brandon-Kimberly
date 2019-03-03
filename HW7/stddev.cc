#include<cstdarg>
#include<cmath>
#include"stddev.h"

double stddev(int n, ...) {
    double sum = 0, std_sum = 0;
    int val;
    va_list args;
    va_start(args, n);
    for (int i = 0; i < n; i++) {
        sum += va_arg(args, int);
    }
    double mean = sum / n;
    va_start(args, n);
    for (int i = 0; i < n; i++) {
        val = va_arg(args, int);
        std_sum += pow(val - mean, 2);
    }
    double sigma = pow(std_sum / n, 0.5);
    return sigma;
}