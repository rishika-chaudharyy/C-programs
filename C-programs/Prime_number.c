//Write a prohram to check whether the input number is prime or not

#include<stdio.h>
 int main() {
    int n,count=0; 
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0)
        count++;
    }
    if(count==2){
        printf("The number is prime");
    }else{
        printf("The number is not prime");
    }
    return 0;
 }