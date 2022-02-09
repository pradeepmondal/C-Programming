//WAP to make a simple calculator

#include <stdio.h>

int main(){
    while(1){
        int op; 
        float num1, num2;
        printf("\nWelcome to simple calculator: \n\n 1. Addition\n 2. Subtraction\n 3. Division\n 4. Multiplication \n 5: Quit \n\n Enter your choice:  ");
        scanf("%d", &op);
        if(op==5){
            break;
        }
        printf("Enter number 1:  ");
        scanf(" %f", &num1);
        printf("Enter number 2:  ");
        scanf(" %f", &num2);


        switch(op){
            case 1: printf("The result is  %f", num1+num2);
                    break;
            case 2: printf("The result is  %f", num1-num2);
                    break;
            case 3: printf("The result is  %f", num1/num2);
                    break;
            case 4: printf("The result is  %f", num1*num2);
                    break;
        }

    }

    return 0;
}