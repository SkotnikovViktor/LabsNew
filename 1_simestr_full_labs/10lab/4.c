#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <time.h>



int main(void){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    
    int number = 0;
    int count = 31;
    int massive_binary[32] = {0};

    printf("Введите число, которые следует перевести в двочиное представаление: ");
    scanf("%d", &number);


    while (number != 0){
        massive_binary[count] = number % 2;
        number = number / 2;
        count--;
    }

    for (int i = 0; i < 32; i++){
        printf("%d",massive_binary[i]);
    }



}