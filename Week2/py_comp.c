#include <stdio.h>

int main(){
    char arr[] = "COMPUTER";
    for(int i=0;i<9;i++){
        for(int j=0; j<i;j++){
            printf("%c", arr[j]);
        }
        printf("\n");
    }
    return 0;

}