#include<stdio.h>
int main(){
    int a=0;
    for(;;){
        scanf("%d", &a);
        if(a==0){
            break;
        }
        printf("%d\n", a);
    }
    return 0;
}