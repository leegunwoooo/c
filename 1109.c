#include<stdio.h>
int main(){
    char name;
    int a=0;
    char e;
    float b=0;
    scanf("%s\n%d\n%c\n%f", &name, &a, &e, &b);
    printf("%s\n%d\n%c\n%f", name, a, e, b);
    return 0;
}