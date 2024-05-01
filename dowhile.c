#include<stdio.h>
int main(){
    int a=0;
    do{
        scanf("%d", &a);
        if(a==0){
            break;
        }
        printf("%d", a);
    }while(1)
    return 0;
}