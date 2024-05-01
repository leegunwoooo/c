#include<stdio.h>
int main(){
    int a, d, n;
    int result=0;
    scanf("%d %d %d", &a, &d, &n);
    for(int i=a; i<=d; i+=n){
        result=i;
    }  
    printf("%d", result);
    return 0;
}