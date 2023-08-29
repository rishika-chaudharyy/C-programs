//Pattern

// #include<stdio.h>
// int main() {
//     int n,m;
//     printf("Enter the values of n and m");
//     scanf("%d",&n);
//     scanf("%d",&m);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             printf("*");
//         }
//         printf("\n");
//     }S
//     return 0;
// }


// #include<stdio.h>
// int main() {
//     int n,m;
//     printf("Enter the values of n and m");
//     scanf("%d",&n);
//     scanf("%d",&m);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main() {
//     int n,m;
//     printf("Enter the values of n and m");
//     scanf("%d",&n);
//     scanf("%d",&m);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main() {
//     int n,m;
//     printf("Enter the values of n and m");
//     scanf("%d",&n);
//     scanf("%d",&m);
//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1;j<=m;j++){
//             int d=a+64;
//             char ch=(char)d;
//             printf("%c",d);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include<stdio.h>
int main() {
    int n,m;
    printf("Enter the values of n and m");
    scanf("%d",&n);
    scanf("%d",&m);
    int a=1;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=m;j++){
            int d=a+64;
            char ch=(char)d;
        
            printf("%c",d);
            a++;
        }
        printf("\n");
    }
    return 0;
}