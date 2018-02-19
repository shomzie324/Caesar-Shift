#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include <stdlib.h>
#include<ctype.h>

int main (int argc, string argv[])
{
    if(argc == 2)
    {
    int k = atoi(argv[1]);
    
    printf("Input text to be encrypted:");
    
    string s = GetString();
    
    for(int i = 0, j = strlen(s); i < j; i++)
    {
        if(isalpha(s[i]) && s[i] >= 'A' && s[i] <= 'Z' )
        {
            s[i] = s[i] - 65;
            s[i] = (s[i] + k) % 26;
            s[i] = s[i] + 65;
            printf("%c", s[i]);
        }
        
        else if(isalpha(s[i]) && s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 97;
            s[i] = (s[i] + k) % 26;
            s[i] = s[i] + 97;
            printf("%c", s[i]);
        }
        
        else
        {
            printf("%c", s[i]);
        }
    }
    }
}