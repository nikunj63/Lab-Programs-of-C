// Write a program to check whether the entered year is leap year or not (a year is leap if it is divisible by 4 and divisible by 100 or 400.)
#include <stdio.h>
int main(){
    int n;
    printf("Enter Year: ");
    scanf("%d" , &n);
    if((n%4 == 0 && n%100 != 0)||(n%400 == 0)){
    printf("%d is a leap year.\n",n);
        
    }else
    {
        printf("%d is not a leap year", n);
    }
    return 0;
    


}
