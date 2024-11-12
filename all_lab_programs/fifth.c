// Write a program to find the factorial of a number.
#include <stdio.h>
int main (){
    int n , i , fact = 1;
    printf(" Enter the Number: ");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial of negative number doesn't exist");
    }else
    {for(i = 1; i<=n; i++ ){
        fact = fact*i;
    }
    printf("Factorial of %d = %d\n ", n , fact);}
    return 0;
}