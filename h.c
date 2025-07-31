#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define true 1
#define false 0

int isEven(int num)
{
    return num % 2 == 0;
}

int isPrime(int num)
{
    if (num <= 1) return false;

    if (num == 2) return true;

    for (int i = 3; i < (int) sqrt((double) num); i = i + 2)
    {
        if (num % i == 0) return false;
    }

    return true;
}

int main(int argc, char *argv[])
{
    int n;

    printf("n = ");
    scanf("%d", &n);

    printf("Is even: %d\n", isEven(n));
    printf("Is prime: %d\n", isPrime(n));
    
    return 0;
}