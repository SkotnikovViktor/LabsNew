#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <time.h>


int binary_to_decimal(int start, int end, int *massive_binary){

    int number_pow2 = 1;
    int result_decimal = 0;
    for (int i = start; i <= end; i++){
        if (massive_binary[i] == 1){
            result_decimal += number_pow2;
        }
        number_pow2 *= 2;
    }

    return result_decimal;
}

int obrabotka(int a, int b, int c, int type_operation, int kod_operation){

    switch (type_operation)
    {

    case 0: 
        if (kod_operation == 0){
            return (a + b + c);

        } else if (kod_operation == 1){
            return (a - b - c);

        } else if (kod_operation == 10){
            return (a / b / c);

        } else if (kod_operation == 11){
            return (a * b * c);
        }
        break;
    

    case 1:
        if (kod_operation == 100){
            return (a << b << c);

        } else if (kod_operation == 101){
            return (a >> b >> c);
        }
        break;

    case 10:
        if (kod_operation == 110){
            return (a && b && c);

        } else if (kod_operation == 111){
            return (a || b || c);
        }
        break;

    case 11:
        break;
    
    default:
        return 0;
        break;
    }

}




int main(void){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);




    // 00 - арифм(+(0000) -(0001) /(0010) *(0011))
    // 01 - битовые (<<(0100) >>(0101))
    // 10 - логические (&&(0110) ||(0111))
    // 11 - 


    int number = 0;
    int count = 31;
    int massive_binary[32] = {0};

    scanf("%d", &number);


    while (number != 0){
        massive_binary[count] = number % 2;
        number = number / 2;
        count--;
    }

    for (int i = 0; i < 32; i++){
        printf("%d", massive_binary[i]);
    }
    printf("\n");


    int a,b,c,type_operation,kod_operation = 0;



    
    type_operation =  binary_to_decimal(0,1,massive_binary);
    kod_operation = binary_to_decimal(2,5,massive_binary);
    a = binary_to_decimal(6,9,massive_binary);
    b = binary_to_decimal(10,13,massive_binary);
    c = binary_to_decimal(27,31,massive_binary);

    printf("%d", obrabotka(a,b,c,type_operation,kod_operation));





}