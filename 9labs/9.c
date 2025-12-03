#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <time.h>

int matrix_search(int x, int y, int *pointer, int n){
    return *(pointer+(x*n+y));
}

int main(void){
    srand(time(NULL));
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int matrix[4][4];

    int *matrix_pointer = &matrix[0][0];

    for (int i = 0; i < (sizeof(matrix) / sizeof(matrix[0][0])); i++){
        (*matrix_pointer++) = rand() % 10;

    }


    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf(" %d ",matrix[i][j]);
        }
    }
    printf("\n");

    printf(" %d ",matrix_search(3,1,&matrix[0][0],4));






}