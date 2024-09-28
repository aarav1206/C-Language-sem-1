#include<stdio.h>

int main(){
    int a, b;
    printf("enter a:");
    scanf("%d" , &a);

    printf("enter b:");
    scanf("%d" , &b);

    int sum = a + b;
    printf("Sum is:%d" , sum);
     // printf("Sum is:%d" , a + b); //we can use directly operation without creating variables
    // printf("Sum is:%d" , a - b);
    // printf("Sum is:%d" , a * b);
    return 0;
    
}
