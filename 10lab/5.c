#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <time.h>

void convert_int_part(int int_part){
    int *arr = (int*)calloc(32,sizeof(int));

    int count = 31;
    while (int_part != 0){
        arr[count] = int_part % 2;
        int_part = int_part / 2;
        count--;
    }

    int flag = 0;
    for (int i = 0; i < 32; i++){
        if (arr[i] == 0 && flag == 0){
            continue;
        }

        else if (arr[i] == 1 && flag == 0){
            flag = 1;
            printf("%d", arr[i]);
        }

        else if (flag == 1){
            printf("%d", arr[i]);
        }
    
    }

    free(arr);
}




void convert_frac_part(double frac_part){
    // Ограничения- 10 знаков
    int *arr_frac = (int*)calloc(10,sizeof(int));

    int index = 0;
    for (int i = 1; i <= 10; i++){
        int r = (int)(frac_part*=2);
        arr_frac[index] = r;
        
        if (r == 0){
            continue;
        }

        else if (r == 1){
            frac_part-=1;
        }

        index++;
    }

    for (int i = 0; i < 10; i++){
        printf("%d",arr_frac[i]);
    }

    free(arr_frac);

}



int main(void){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    

    double number = 0;
    double frac_part;
    int int_part;

    printf("Введите число: ");
    scanf("%lf", &number);
    
    int_part = (int)number;
    frac_part = number - (int)number;

    convert_int_part(int_part);
    printf(".");
    convert_frac_part(frac_part);


    


}