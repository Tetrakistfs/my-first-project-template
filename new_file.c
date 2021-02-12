//this is a new file
/*Write a program that read your name and then displays the ASCII Value of each character
in your name on a separate Line.*/
#include<stdio.h>
int main()
{
    char name[26];
    printf("Enter your name::");
    gets(name);
    for (int i=0;i!='\n';i++)
    {
        printf("The ascii value of the character %c = %d\n",name[i],name[i]);
    }
}