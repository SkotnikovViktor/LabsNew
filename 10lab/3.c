#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <time.h>



int main(void){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;

    printf("Введите число, которое нужно умножить и разделить: ");
    scanf("%d", &num);

    int ymn = num << 3;
    int del = num >> 3;

    printf("Результат умножение числа %d на 8 = %d\nРезультат деления числа %d на 8 = %d",num,ymn,num,del);

}