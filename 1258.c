#include<stdio.h>
int main(){
    int a, b=0;
    scnaf("%d", &a);
    for(int i=1; i<=a; i++){
        b+=i;
    }
    printf("%d", b);
    return 0;
}