#include<stdio.h>
int main(){
    int number = 5;
    int count = 1;

    do{
        printf("%d", count);
    } while (count > number);
    return 0;
}