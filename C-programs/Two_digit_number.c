//Print true for a number greater than 9 and less than 100 or a two digit number

#include<stdio.h>
int main() {
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    printf("%d", a>9 && a<100);
    return 0;
}