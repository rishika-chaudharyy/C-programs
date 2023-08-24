//Write a program to check armstrong or not

#include<Stdio.h>
 int main() {
    int n , r , c , arm=0;
    printf("Enter a number");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm){
        printf("The number is armstrong");
    
    }
    else{
        printf("The number is not armstrong");
    }
    return 0;
 }