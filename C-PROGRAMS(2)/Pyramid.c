// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n");
//     scanf("%d",&n);
//     int nst=1;
//     int nsp=n-1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=nsp;j++){
//             printf(" ");
            
//         }
//         nsp--;
//         for(int k=1;k<=nst;k++){
//             printf("*");
           
//         }
//          nst=nst+2;
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n");
//     scanf("%d",&n);
    
//     int nsp=n-1;
//     for(int i=1;i<=n;i++){
//         int a=i-1;
//         for(int j=1;j<=nsp;j++){
//             printf(" ");
            
//         }
//         nsp--;
//         for(int k=1;k<=i;k++){
//             printf("%d",k);
           
//         }
//         for(int l=1;l<=i-1;l++){
//             printf("%d",a);
//             a--;
//         }
  
//         printf("\n");
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int ml=n/2 +1;
    int nsp=n/2;
    int nst=1;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=nsp;j++){
            printf(" ");
            
        }
        nsp--;
        for(int k=1;k<=nst;k++){
            printf("*");
           
        }
        if(i<ml){
            nsp--;
            nst=nst+2;
        }else{
            nsp++;
            nst=nst-2;
        }
  
        printf("\n");
    }
    return 0;
}