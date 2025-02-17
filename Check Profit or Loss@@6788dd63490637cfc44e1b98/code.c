#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d%d",&a,&b);
    if(a==100&&b>100){
        printf("Profit");
    }
    else if(a==100&&b<100){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss")
    }
    return 0;
}


















