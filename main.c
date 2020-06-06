#include <stdio.h>
#include <stdlib.h>
#include "dsa.c"

void main() {
    double* vec = malloc(sizeof(double)*100);
    vec[0] = 8.3;
    vec[1] = 5;
    vec[2] = 4;
    vec[3] = 7;
    vec[4] = 9;
    vec[5] = 2;
    vec[6] = 6;
    vec[7] = 3;
    vec[8] = 1;
    int n = 9;
    double_array_print(vec,n);
    /*
    min_heap_build(vec,n);
    double_array_print(vec,n);
    printf("%lf....",min_heap_pop(vec,&n));
    double_array_print(vec,n);
    printf("%lf....",min_heap_pop(vec,&n));
    double_array_print(vec,n);
    printf("%lf....",min_heap_pop(vec,&n));
    double_array_print(vec,n);
    printf("%lf....",min_heap_pop(vec,&n));
    double_array_print(vec,n);
    printf("%lf....",min_heap_pop(vec,&n));
    double_array_print(vec,n);
    printf("%lf....",min_heap_pop(vec,&n));
    double_array_print(vec,n);
    printf("%lf....",min_heap_pop(vec,&n));
    double_array_print(vec,n);
    printf("%lf....",min_heap_pop(vec,&n));
    double_array_print(vec,n);
    min_heap_push(vec,&n,10);
    double_array_print(vec,n);
    min_heap_push(vec,&n,4);
    double_array_print(vec,n);
    min_heap_push(vec,&n,8);
    double_array_print(vec,n);
    min_heap_push(vec,&n,7);
    double_array_print(vec,n);
    min_heap_push(vec,&n,11);
    double_array_print(vec,n);
    min_heap_push(vec,&n,6);
    double_array_print(vec,n);
    min_heap_push(vec,&n,2);
    double_array_print(vec,n);
    min_heap_push(vec,&n,5);
    double_array_print(vec,n);
    */
}


