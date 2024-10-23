#include <stdio.h>
#include <string.h>

int linsearch(char **yarr, char *val)
{
    for(int i = 0; i < sizeof(yarr) / sizeof(yarr[0]); i++)
    {
        if(strcmp(yarr[i], val) == 0)
        {
            return 0;
        }    
    }
    return 1;
}

int main()
{
    char *yarr[] = {"Shluck much", "much Shluck"};
    char *val = "Shluck Much";
    linsearch(yarr, val);
}