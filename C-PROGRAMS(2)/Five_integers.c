# include <stdio.h>
int main() {
FILE *fptr;


fptr = fopen("NewFile.txt", "r");
printf("character in file is : %c\n", fgetc(fptr));
printf("character in file is : %c\n", fgetc(fptr));
printf("character in file is : %c\n", fgetc(fptr));
printf("character in file is : %c\n", fgetc(fptr));
printf("character in file is : %c\n", fgetc(fptr));
fclose(fptr);
}