// Write a program to check number is Armstrong or not. (Hint: A number is Armstrong if the sum of cubes of individual digits of a number is equal to the number itself)
#include <stdio.h>
int main(){
    int n ,r, sum = 0,A;
    printf("Enter the Number: ");
    scanf("%d" , &n);
    A = n;
    while(n>0){
        r = n%10;
        sum = sum+(r*r*r);
        n = n/10;
    }
    if (A == sum)
    {
        printf("%d = %d is an Armstrong Number\n",A,sum  );
    }else{
        printf("%d = %d is not Armstrong Number\n",A, sum);
    }
    return 0;

}