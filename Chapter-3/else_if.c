#include<stdio.h>

int main(){
    int age = 65;

    if(age>60){
        printf("you can drive and you are senior citizen"); //If this conition is true then it will not read below this program
    }

    else if(age>18){
        printf("You can drive");
    }

    return 0;
}