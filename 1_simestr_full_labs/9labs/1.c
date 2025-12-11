#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>


int main(void){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double first = 50.0;
    int second = 50;
    int more = 101;

    double *first_p = &first;
    int *second_p = &second;
    void *more_y;

    printf("Adres 1 - %p\n", &first);
    printf("Adres 2 - %p\n\n", &second);

    printf("Value 1 - %lf\n", *first_p);
    printf("Value 2 - %d\n\n", *second_p);

    printf("Adres pointer 1 - %p\n",&first_p);
    printf("Adres pointer 2 - %p\n\n", &second_p);



}