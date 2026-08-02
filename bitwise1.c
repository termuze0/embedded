#include <stdio.h>

int main(void){
    char a= 12;
    char b = 10;

    printf("%d\n", a & b);
    printf("%d\n",a | b);
    printf("%d\n",a ^ b);
    printf("%d\n",a &&b);
    printf("%d\n",a || b);
    printf("%d\n",a >> 2);
    return 0;
}