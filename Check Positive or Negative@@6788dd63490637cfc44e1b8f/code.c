#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>0){
        printf("Positive");
    }
    if(b<0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
    return 0;
}