#include <stdio.h>

int main(){
    int a,b,max;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    max = (a>b)?a:b;
    if(a==b){
        max=a;
    }
    printf("%d is greater", max);

    return 0;
}