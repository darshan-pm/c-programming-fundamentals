#include<stdio.h>

int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    int count = 5;
    do{
        printf("%d\n", count);
        count++;
    } while (count < number);

    return 0;
}