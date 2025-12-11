#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>


int main(void){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    int massive[7] = {1,2,3,4,5,6,7};
    int massive_clone[sizeof(massive)/sizeof(massive[0])];

    int *massive_pointer = &massive[0];

    for (int i = 0; i < (sizeof(massive) / sizeof(massive[0])); i++){
        massive_clone[i] = *massive_pointer++;
    }

    for (int i = 0; i < 7; i++){
        printf(" %d ",massive_clone[i]);
    }

}