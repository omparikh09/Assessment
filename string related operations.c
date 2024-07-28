#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void checkEquality(char str1[], char str2[]) 
{
    if (strcmp(str1, str2) == 0) 
	{
        printf("The strings are equal\n");
    } 
	else 
	{
        printf("The strings are not equal\n");
    }
}

void copyString(char str1[], char str2[]) 
{
    strcpy(str2, str1);
    printf("The string has been copied:- %s\n", str2);
}

void concatenateStrings(char str1[],char str2[],char result[]) 
{
    strcpy(result, str1);
    strcat(result, str2);
    printf("The concatenated string is:- %s\n", result);
}

void showString(char str[]) 
{
    printf("The string is:- %s\n", str);
}

void reverseString(char str[], char reversed[]) 
{
    int i,len = strlen(str);
    for (i=0;i<len;i++) 
	{
        reversed[i]=str[len-i-1];
    }
    reversed[len] = '\0';
    printf("The string after reversing is:- %s\n", reversed);
}

void checkPalindrome(char str[]) 
{
    int len = strlen(str);
    int i,flag = 1;
    for (i=0;i<len/2;i++) 
	{
        if (str[i]!=str[len-i-1]) 
		{
            flag = 0;
            break;
        }
    }
    if (flag) 
	{
        printf("The string is a palindrome\n");
    } 
	else 
	{
        printf("The string is not a palindrome\n");
    }
}

void substring(char str[], int start, int length, char result[]) 
{
    strncpy(result, str + start, length);
    result[length] = '\0';
    printf("The substring is:- %s\n", result);
}

int main() 
{
    char str1[100], str2[100], result[200], reversed[100];
    int choice, start, length, continueFlag;

    do 
	{
        printf("Main Menu\n");
        printf("1. Equality\n");
        printf("2. String Copy\n");
        printf("3. Concat\n");
        printf("4. Show\n");
        printf("5. Reverse\n");
        printf("6. Palindrome\n");
        printf("7. Sub String\n");
        printf("8. Exit\n");
        printf("Please Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
    
	        case 1:
                printf("Please enter the first string:- ");
                scanf("%s",&str1);
                printf("Please enter the second string:- ");
                scanf("%s",&str2);
                checkEquality(str1, str2);
                break;
    
	        case 2:
                printf("Please enter the string to copy: ");
                scanf("%s",&str1);
                copyString(str1, str2);
                break;
    
	        case 3:
                printf("Please enter the first string: ");
                scanf("%s",&str1);
                printf("Please enter the second string: ");
                scanf("%s",&str2);
                concatenateStrings(str1, str2, result);
                break;
    
	        case 4:
                printf("Please enter the string to show: ");
                scanf("%s",&str1);
                showString(str1);
                break;
    
	        case 5:
                printf("Please enter the string to reverse: ");
                scanf("%s",&str1);
                reverseString(str1, reversed);
                break;
    
	        case 6:
                printf("Please enter the string to check palindrome: ");
                scanf("%s",&str1);
                checkPalindrome(str1);
                break;
    
	        case 7:
                printf("Please enter the string: ");
                scanf("%s",&str1);
                printf("Please enter the start position: ");
                scanf("%d",&start);
                printf("Please enter the length of substring: ");
                scanf("%d",&length);
                substring(str1, start, length, result);
                break;
    
	        case 8:
                exit(0);
    
	        default:
                printf("Invalid choice!\n");
                break;
    
	    }

        printf("Do you want to continue (Press 1 to continue)? :- ");
        scanf("%d", &continueFlag);
    
	} while (continueFlag == 1);

    return 0;
}
