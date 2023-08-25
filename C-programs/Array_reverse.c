//Write a program to reverse the elements of array

#include<stdio.h> 
void rev(int arr[] , int n);
void print(int arr[],int n);
 int main() {
    int arr[]={1,2,3,4,5};
    rev(arr,5);
    print(arr,5);
    return 0;
 }
 void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
 }
 void rev(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int f=arr[i];
        int s=arr[n-1-i];
        arr[i]=s;
        arr[n-1-i]=f;
    }


 }
