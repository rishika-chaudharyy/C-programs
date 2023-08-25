//Write a program to enter price of 3 items and print their final cost with gst

#include<stdio.h>
int main() {
    float price[]={23,45,67};
    printf("Price 1 gst=%f\n",price[0]*0.18+price[0]);
    printf("Price 2 gst=%f\n",price[1]*0.18+price[1]);
    printf("Price 3 gst=%f\n",price[2]*0.18+price[2]);
    return 0;
}