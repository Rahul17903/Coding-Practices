#include<stdio.h>
int main(){
    int number , rev = 0, reminder;
    printf("Enter a number : ");
    scanf("%d",&number);
    while(number != 0){
        reminder = number % 10;
        rev = rev * 10 + reminder;
        number = number / 10;
    }
    printf("%d",rev);
}