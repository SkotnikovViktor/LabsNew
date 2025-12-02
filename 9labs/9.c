#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int matrix[4][3];

    int *matrix_pointer = &matrix[0][0];

    for (int i = 0; i < (sizeof(matrix) / sizeof(matrix[0][0])); i++){
        (*matrix_pointer++) = rand() % 10;

    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            printf(" %d ",matrix[i][j]);
        }
    }



}