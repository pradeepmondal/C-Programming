//WAP to determine whether a person is eligible to vote
#include <stdio.h>

int main(){
    int age;
    printf("Enter the age:");
    scanf("%d", &age);

    if(age>18){
        printf("You can vote");
    }
    else{
        printf("You have to wait");
    }

    return 0;
}