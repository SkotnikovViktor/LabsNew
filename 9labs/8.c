#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>


int main(void){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int massive[7] = {1,2,3,4,5,6,7};
    

    int *start_pointer = &massive[0];

    int *end_pointer = &massive[sizeof(massive) / sizeof(massive[0]) - 1];


    int massive_index[sizeof(massive) / sizeof(massive[0])];
    for (int i = 0; i < (sizeof(massive) / sizeof(massive[0])); i++){
        massive_index[i] = (*end_pointer - *start_pointer++);
    }

    for (int i = 0; i < (sizeof(massive) / sizeof(massive[0]) / 2); i++){
        int t = massive_index[i];
        massive_index[i] = massive_index[sizeof(massive) / sizeof(massive[0]) - i - 1];
        massive_index[sizeof(massive) / sizeof(massive[0]) - i - 1] = t;
    }

    for (int i = 0; i < (sizeof(massive) / sizeof(massive[0])); i++){ // Для проверки
        printf(" %d ", massive_index[i]);
    }

}