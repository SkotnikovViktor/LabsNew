#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>


int main(void){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int massive[7] = {1,2,3,4,5,6,7};

    int massive_pointer = *massive;

    //*massive_pointer = 100;

    for (int i = 0; i < 7; i++){
        printf(" %d ", *massive+i);
    }
}