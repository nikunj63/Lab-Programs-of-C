// f a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number.
#include <stdio.h>
int main(){
    int n, firstDigit, lastDigit ,sum;
    printf("Enter a four digit nummber: ");
    scanf("%d",&n);
    firstDigit = n/1000;
    lastDigit = n%10;
    sum = firstDigit+lastDigit;
    printf("Sum of the first and last digit: %d\n",sum);
    return 0;
}