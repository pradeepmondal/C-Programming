#include <stdio.h>

int main(){
    int a,b,c,max;
    printf("Enter the value of a b c: ");
    scanf("%d %d %d", &a, &b, &c);
    max = (a>b)?((a>c)?a:c):((b>c)?b:c);
    if(a==b==c){
        printf("Numbers are equal");
    }
    else{
    printf("%d is max", max);
    }
    
    return 0;

}

    