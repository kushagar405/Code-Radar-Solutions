#include <stdio.h>
int main(){
    int num1;
    int num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1>num2){
        printf("num1");
    }
    else{
        printf("num2");
    }
    return 0;
}