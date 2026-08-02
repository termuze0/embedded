#include <stdio.h>
int is_odd(int num);
int main(void){
    printf("%d",is_odd(11));
}

int is_odd(int num){
        if(num & 0x01){
            return 1;
        };
        return 0;
    }