#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <time.h>



int main(void){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n_index = 0;
    int number = 0;
    int massive_binary[32] = {0};


    printf("Введите номер индекса: ");
    scanf("%d", &n_index);

    if (n_index >= 32){
        printf("Введён неверный индекс!");
        exit(0);
    }

    printf("\nВведите число:");
    scanf("%d", &number);


    int index = 31;
    while (number != 0){
        massive_binary[index] = number % 2;
        number = number / 2;
        index--;
    }

    printf("До: ");
    for (int i = 0; i < 32; i++){
        printf("%d", massive_binary[i]);
    }
    printf("\n");

    
    massive_binary[32 - n_index] = (int)(!massive_binary[32 - n_index]);

    printf("После: ");
    for (int i = 0; i < 32; i++){
        printf("%d",massive_binary[i]);
    }




}