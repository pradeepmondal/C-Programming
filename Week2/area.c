//WAP in C to find the area of square
#include <stdio.h>

int main(){
    float side, area;
    printf("Enter the value of side");
    scanf("%f", &side);
    area = side*side;
    printf("%f", area);

    return 0;
}