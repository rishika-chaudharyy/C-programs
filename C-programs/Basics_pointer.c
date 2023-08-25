//Basics of pointer

#include<stdio.h> 
int main() {
    int age=90;
    int *ptr=&age;
    printf("%p\n",ptr);
    printf("%u\n",ptr);
    printf("%d\n",*ptr);
    int **pptr=&ptr;
    printf("%p\n",pptr);
    printf("%u\n",pptr);
    printf("%d\n",*pptr);
    return 0;
}