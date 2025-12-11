#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>


int main(void){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int massive[7] = {1,2,3,4,5,6,7};

    int *start_pointer = &massive[0];
    int *end_pointer = &massive[sizeof(massive)/sizeof(int) - 1];

    for (int i = 0; i < ((sizeof(massive)/sizeof(int)) / 2); i++){
        int t = *start_pointer;
        *start_pointer = *end_pointer;
        *end_pointer = t;
        *start_pointer++; *end_pointer--;

    }

    for (int i = 0; i < (sizeof(massive)/sizeof(int)); i++){
        printf(" %d ",massive[i]);
    }
}