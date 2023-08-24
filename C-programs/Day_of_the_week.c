//Write a program to input number corresponding the day of the week

#include<stdio.h>
int main() {
    int number;
    printf("Enter the number between 1-7 for the days of the week");
    scanf("%d",&number);
    switch(number){
        
        case 1: printf("The day is Monday");
    break;
    case 2: printf("The day is Tuesday");
    break;
    case 3: printf("The day is Wednesday");
    break;
    case 4: printf("The day is Thursday");
    break;
    case 5: printf("The day is Friday");
    break;
    case 6: printf("The day is Saturday");
    break;
    case 7: printf("The day is Sunday");
    break;
    }
    return 0;
}