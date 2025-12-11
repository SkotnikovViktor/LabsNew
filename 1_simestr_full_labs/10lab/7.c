#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <time.h>



int main(void){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int a = 5;
    int b = 10;

    a ^= b;
    b ^= a;
    a ^= b;

    printf("a = %d\nb = %d",a,b);
}