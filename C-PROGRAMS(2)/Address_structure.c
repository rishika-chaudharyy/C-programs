//Write a program to store address of five persons using structures

#include<stdio.h> 
 typedef struct address{
    int house_number;
    char state[100];
    char area[100];
    char city[100];
} add;
 int main() {
    add a[5];
    for(int i=0;i<5;i++){
        printf("Enter your address");
        printf("Enter the state:");
        scanf("%s",&a[i].state);
        printf("Enter the city:");
        scanf("%s",&a[i].city);
        printf("Enter area:");
        scanf("%s",&a[i].area);
        printf("Enter house number:");
        scanf("%d",&a[i].house_number);
    }
    for(int i=0;i<5;i++){
            printf("Your address is:\n");
            printf("State:%s\n",a[i].state);
            printf("City:%s\n",a[i].city);
            printf("Area:%s\n",a[i].area);
            printf("House_number:%d\n",a[i].house_number);
        }
    return 0;
 }

