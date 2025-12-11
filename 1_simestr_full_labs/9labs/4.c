#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>


int main(void){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int count = 50;

    int *count_pointer = &count; // Присваемаем адрес переменной

    // 1 способ 
    printf("Value 1 - %d\n", *(&count));

    // 2 способ
    int **counter_pointer2 = &count_pointer;

    printf("Value 2 - %d\n", **counter_pointer2);

    // 3 способ
    int ***counter_pointer3 = &counter_pointer2;

    printf("Value 3 - %d", ***counter_pointer3);






}