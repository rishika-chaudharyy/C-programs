// C program to demonstrate an armstrong number
// between the given intervals
#include <stdio.h>
 
int main()
{
    int s = 1, e = 500, num, n, arm = 0, i, sum;
 
    // iterating the for loop
    // using the given intervals
    for (i = s; i <= e; i++) {
        num = i;
        sum = i;
 
        // finding the armstrong number
        while (num != 0) {
            n = num % 10;
            arm = arm + (n * n * n);
            num = num / 10;
        }
 
        // if number is equal to
        // the arm then it is a
        // armstrong number
        if (sum == arm) {
            printf("%d\n", i);
        }
        arm = 0;
    }
    return 0;
}