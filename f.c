#include <stdio.h>
#include <stdlib.h>

void selectionSort(int* nums, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[j] < nums[i])
            {
                //doing swap
                nums[i] += nums[j];
                nums[j] = nums[i] - nums[j];
                nums[i] = nums[i] - nums[j];
            }
            
        }
        
    }
    
}

void main(int argc, char* argv[])
{
    int n = argc - 1; //due to ./out.exe
    int nums[n];

    // printf("argc = %d\n", argc);

    for (int i = 0; i < n; i++)
    {
        nums[i] = atoi(argv[i + 1]);
    }

    printf("Origin: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    selectionSort(nums, n);
    printf("After sort: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}