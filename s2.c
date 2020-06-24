#include <stdio.h>
//Write a program in C to Calculate the length of the string using a pointer.
int main()

{
    char line[50];
    printf("Input a string:\n");
    fgets(line,sizeof(line),stdin); //scans for string
    int count=0;
    char *p=&line[0]; //p points to the 1st component of scanned string
    for(int i=1;line[i]!='\0';i++)
    {
        p++;
        count++; //count variable increases as long as \0 is not reached
    }
    printf("The length of the given string is: %d",count);



    return 0;
}