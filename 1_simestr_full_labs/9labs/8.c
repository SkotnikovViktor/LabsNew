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

    int size = sizeof(massive) / sizeof(massive[0]);
    int massive_index[size];
    for (int i = 0; i < size; i++){
        massive_index[i] = (*end_pointer - *start_pointer++);
    }

    for (int i = 0; i < (size / 2); i++){
        int t = massive_index[i];
        massive_index[i] = massive_index[sizeof(massive) / sizeof(massive[0]) - i - 1];
        massive_index[sizeof(massive) / sizeof(massive[0]) - i - 1] = t;
    }

    for (int i = 0; i < size; i++){ // Для проверки
        printf(" %d %d \n", massive_index[i], massive[i]);
    }

}