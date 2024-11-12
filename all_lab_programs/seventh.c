// Write a program to check whether a date is valid or not.
#include <stdio.h>
int LeapYear(int year){
    return(year % 4 == 0 && (year % 100 !=0 || year % 400 == 0));
}
int main(){
    int day , month ,year ;
    int maxDays;
    printf("Enter the year(dd mm yyyy): ");
    scanf("%d %d %d", &day,&month,&year);
    if (year < 1 || month < 1 || month>12 || day<1 || day > 31){
        printf("Invalid date.\n");
        return 0;
    }
    switch (month)
    {
    case 4: case 6: case 9: case 11:
        maxDays = 30;
        break;
    case 2 :
        maxDays = LeapYear(year)?29:28;
        break;
    default:
        maxDays = 31;
        break;
    }

    if(day<=maxDays){
        printf("The date is Valid.\n");
    }else{
        printf("Invalid Date that you entered\n");
    }
    return 0;
}