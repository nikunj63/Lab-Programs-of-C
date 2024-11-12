// Write a program to swap values of two variables with and without using third variable

// with third variable
/*#include <stdio.h>
int main(){
    int x = 10 ,y = 20 , A;
    printf("before swapping: x = %d , y = %d\n" ,x,y);
    A = x;
    x = y;
    y = A;
    printf("After swapping: x = %d, y = %d\n ",x,y);
    return 0;
}*/

// without third variable

#include <stdio.h>
int main (){
    int x = 10 ,y = 20;
    printf("Before swapping: x = %d , y = %d\n",x,y);
     x = x+y;
     y = x-y;
     x = x-y;
     printf("After Swapping: x = %d , y = %d", x,y);
     return 0;
}
