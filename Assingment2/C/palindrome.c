// //Write a C program to find the palindrome using appropriate abstract data type to implement a more powerful version of the function is_palindrome().
// //As a reminder, this function implements simple palindome verification. Here is the signature and documentation for the function:
// //- bool is_palindrome(char *text):
// //Return true if text is a palindrome, false otherwise. A palindrome is a string that is identical to itself  when  reversed. For example, "madam", "dad", and "abba" are palindromes. Note: the empty string is a palindrome, as is every string of length one.

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <stdbool.h>

// bool is_palindrome(char *text)
// {
//     int i = 0;
//     int j = strlen(text) - 1;
//     while (i < j)
//     {
//         if (text[i] != text[j])
//         {
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }


// int main()
// {

//     printf("Enter a string: ");
//     char *text = (char *)malloc(sizeof(char) * 100);
//     scanf("%s", text);
//     //enter a sentence using stack

//     int length = strlen(text);
//     int i = 0;
//     int j = length - 1;
//     bool is_palindrome = true;
//     while (i < j)
//     {
//         if (text[i] != text[j])
//         {
//             is_palindrome = false;
//             break;
//         }
//         i++;
//         j--;
//     }
//     if (is_palindrome)
//     {
//         printf("%s is a palindrome\n", text);
//     }
//     else
//     {
//         printf("%s is not a palindrome\n", text);
//     }
//     return 0;
// }


//     // char *text = "madam";
//     // int i, j, len;
//     // len = strlen(text);
//     // for (i = 0, j = len - 1; i < j; i++, j--)
//     // {
//     //     if (text[i] != text[j])
//     //     {
//     //         printf("%s is not a palindrome\n", text);
//     //         return 0;
//     //     }
//     // }
//     // printf("%s is a palindrome\n", text);
//     // return 0;
// //}



#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

char *stack;
int top = -1;

void push(char ele)
{



    stack[++top] = ele;
}
char pop(void)
{
    return stack[top--];
}

bool is_pallindrome(char *text);

int main()
{
    char str[] = "Doc, note: I dissent. A fast never prevents a fatness. I diet on cod.";
    if (is_pallindrome(str))
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return 0;
}

bool is_pallindrome(char *text)
{
    int len = 0, i = 0;
    char *temp;
    while (*(text + i) != '\0')
    {
        if (isalpha(*(text + i)))
        {
            *(temp + len) = *(text + i);
            len++;
        }
        i++;
    }
    *(temp + i) = '\0';

    stack = (char *)malloc(len * sizeof(char));

    for (i = 0; i < len / 2; i++)
    {
        push(*(temp + i));
    }

    if (len % 2 != 0)
    {
        i++;
    }

    while (*(temp + i) != '\0')
    {
        char ele = pop();
        if (tolower(ele) != tolower(*(temp + i)))
        {
            return false;
        }
        i++;
    }
    return true;
}