#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define bool int
#define true 1
#define false 0

bool isPalindrome(char* s, int size)
{
    int l = 0, r = size - 1;

    while (l < r)
    {
        // printf("%c vs %c\n", s[l], s[r]);

        if (s[l] != s[r])
        {   
            return false;
        }
        

        l++;
        r--;
    }

    return true;
}

void main(int argc, char* argv[])
{
    char* s = argv[argc - 1];
    int size = strlen(s);

    printf("Is palindrome: %d\n", isPalindrome(s, size));

    // printf("%s\n", s);
    // printf("%d\n", sizeof(s));
    // printf("%d\n", sizeof(s[0]));
    // printf("%d\n", strlen(s));
}