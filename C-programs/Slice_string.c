//Write a function named slice which takes a string and returns a sliced string from index n to m

#include<Stdio.h> 
void slice(char arr[100],int n , int m);
int main() {
    char arr[]="Rishika";
    slice(arr,3,6);
    return 0;
}
void slice(char arr[100],int n , int m){
    char newarr[100];
    int j=0;
    for(int i=n;i<m;i++,j++ ){
        newarr[j]=arr[i];

    }
    newarr[j]='\0';
    puts(newarr);
}