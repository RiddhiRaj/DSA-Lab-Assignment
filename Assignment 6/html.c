//write a C program to validate a given HTML file.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE *fp;
    char ch;
    int i=0;
    char str[100];
    fp=fopen("C:\\Users\\RIDDHI RAJ\\Documents\\GitHub\\DSA-Lab-Assignment\\Assignment 6\\html.txt","r");
    
    if(fp==NULL)
    {
        printf("File not found");
        exit(0);
    }
    
    while((ch=fgetc(fp))!=EOF)
    {
        str[i]=ch;
        i++;
    }

    str[i]='\0';

    if(strstr(str,"<html>"))
    {
        if(strstr(str,"</html>"))
        {
            printf("Valid HTML file");
        }
        else
        {
            printf("Invalid HTML file");
        }
    }
    else
    {
        printf("Invalid HTML file");
    }

    return 0;
}