#include <stdio.h>
int main(){
    int q;
    scanf("%d",&q);
    if(q>=90){
        printf("A");
    }
    else if(q>=80&&q<90){
        printf("B");
    }
    else if(q>=70&&q<80){
        printf("C");
    }
    else if(q>=60&&q<70){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}