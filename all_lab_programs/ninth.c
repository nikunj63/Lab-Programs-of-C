// Write a program to find GCD (greatest common divisor or HCF) and LCM (least common multiple) of two numbers
#include <stdio.h>
int gcd(int a ,int b){
    if(b == 0)
    {return a;}
    return gcd(b,a%b);
}
int main(){
    int c , d ,lcm , hcf;
    printf("Enter two numbers: ");
    scanf("%d %d",&c,&d);
     
    hcf = gcd(c ,d);
    lcm = (c*d)/hcf;

    printf("GCD(HCF) of %d and %d is:  %d\n", c,d,hcf);
    printf("LCM of %d and %d is: %d\n", c , d ,lcm);
    return 0; 
}