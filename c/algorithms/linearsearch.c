#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int linsearch(char **yarr, char *val, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(strcmp(yarr[i], val) == 0)
        {
            return 0;
        }    
    }
    return 1;
}

void test_linsearch()
{
    char *yarr[] = {"Shluck much", "much Shluck"};
    char *val1 = "Shluck much";
    char *val2 = "much Shluck";
    char *val3 = "Shluck Much";
    int size = sizeof(yarr) / sizeof(yarr[0]);

    // Test case 1: value exists in the array
    int result1 = linsearch(yarr, val1, size);
    if(result1 != 0)
    {
        printf("Test case 1 failed\n");
    }

    // Test case 2: value exists in the array
    int result2 = linsearch(yarr, val2, size);
    if(result2 != 0)
    {
        printf("Test case 2 failed\n");
    }

    // Test case 3: value does not exist in the array
    int result3 = linsearch(yarr, val3, size);
    if(result3 != 1)
    {
        printf("Test case 3 failed\n");
    }
}

int main()
{
    test_linsearch();
    return 0;
}