#include <stdio.h>

int main(){
    const float PI = 3.14;
    float r;
    printf("Enter the value of radius:  ");
    scanf("%f", &r);
    printf("The area is %f", PI*r*r);

    return 0;
}