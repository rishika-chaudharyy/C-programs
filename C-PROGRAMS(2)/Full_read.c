//Write a program to read the full file (EOF)

#include<stdio.h> 
int main() {

FILE *fptr;
char ch;
fptr = fopen("NewFile.txt", "r");
ch = fgetc(fptr);
while(ch != EOF) {
printf("%c", ch);
ch = fgetc(fptr);
}
printf("\n");
fclose(fptr);
return 0;
}