//WAP to print days of a week

#include <stdio.h>

int main(){

    int d;
    printf("Enter the value of day number:  ");
    scanf("%d", &d);
    if(d>7 || d<1){
        printf("Invalid value");}

    switch(d){
        case 1: printf("Sunday"); break;
        case 2: printf("Monday"); break;
        case 3: printf("Tuesday"); break;
        case 4: printf("Wednesday"); break;
        case 5: printf("Thursday"); break;
        case 6: printf("Friday"); break;
        case 7: printf("Saturday"); break;
    }

    return 0;
}