#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

int count(int num) 
{
    printf("[");
    
    if(num > 20)
    {
        for(int i = 0; i < num; i++)
            printf("\n%d, \n", i);
            
        printf("]");
    } else
    {
        for(int i = 0; i < num; i++)
            printf("%d", i);
            
        printf("]");
    }
}

void test_count()
{
    // Test case 1: num > 20
    printf("Test case 1: num > 20\n");
    printf("Expected output: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19]\n");
    printf("Actual output: ");
    count(21);
    printf("\n\n");
    
    // Test case 2: num <= 20
    printf("Test case 2: num <= 20\n");
    printf("Expected output: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19]\n");
    printf("Actual output: ");
    count(20);
    printf("\n\n");
}

int main()
{
    test_count();
    
    int num;
    printf("Count:~$ ");
    scanf("%d", &num);
    count(num);
}