#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>


int main(void){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int *test;

    printf("Value pointer - %d\n", *test);

    *test = 50; // Изменяем значение переменной через указатель

    printf("Value pointer past - %d", *test);

    // После создания необъявленого указателя, туда присваивается рандомное число
    
}