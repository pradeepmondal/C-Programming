//WAP to enter a character and determine whether a character is vowel or not

#include <stdio.h>

int main(){
    char ch;
    int count=0;
    printf("Enter the character");
    scanf("%c", &ch);
    char vl[10] = {'a','e','i','o','u','A','E','I','O','U'};
    
    for(int i=0;i<10;i++){
        if(ch==vl[i]){
            count++;
        }
    }

    if(count>0){
        printf("The character is vowel");
    }
    else {printf("The character is not vowel");}

    return 0;

}