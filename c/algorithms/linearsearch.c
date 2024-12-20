#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

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
    char *val3 = "Not Found";
    int size = sizeof(yarr) / sizeof(yarr[0]);

    assert(linsearch(yarr, val1, size) == 0);
    assert(linsearch(yarr, val2, size) == 0);
    assert(linsearch(yarr, val3, size) == 1);
}

int main()
{
    test_linsearch();
    return 0;
}