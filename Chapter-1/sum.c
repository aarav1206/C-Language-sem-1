#include<stdio.h>

int main(){
    int a, b;
    float c;
    printf("enter a:");
    scanf("%d" , &a);

    printf("enter b:");
    scanf("%d" , &b);

    // int sum = a + b;
    // printf("Sum is:%d" , sum);
    c = a/b;
    printf("Sum is:%d\n" , a + b); //we can use directly operation without creating variables
    printf("Subtraction is:%d\n" , a - b);
    printf("Multiplication is:%d\n" , a * b);
    printf("Division is:%f\n" , c);
    printf("Modulus is:%d\n" , a % b);    //Modulus gives remainder and it is use for to find prime number and so on.
    return 0;
    
}
