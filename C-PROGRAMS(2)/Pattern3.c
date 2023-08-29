//For inverted n+1-i

// #include<stdio.h>
//  int main() {
//     int n;
//     printf("Enter the value  of n");
//     scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n+1-i;j++){
//         printf("%d",j);
//     }
//     printf("\n");
// }
//     return 0;
//  }


 #include <stdio.h>

int main() {
    int rows = 5;
    int num = 1;
    char ch = 'A';

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            if (i == 2) {
                printf("%c", ch);
                ch++;
            } else {
                printf("%d", num);
                num++;
            }
        }

        printf("\n");
    }

    return 0;
}



