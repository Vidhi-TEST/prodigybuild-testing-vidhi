#include <stdio.h>
#include <stdlib.h>

int binsearch(int yarr[10], int element)
{
    int mid = sizeof(yarr) / sizeof(yarr[0]) / 2;
    int left = mid;
    int right = sizeof(yarr) / sizeof(yarr[0]) - left;
    extern int i;
    
    if(element == yarr[mid])
    {
        printf("%d", yarr[mid]);
    }
    
    if(element != yarr[right])
    {
        for(i = 0; i < left; i++)
        {
            if(element == yarr[i])
            {
                printf("%d", yarr[i]);
            }
        }
    }
}

void test_binsearch()
{
    int yarr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Test case 1: element is in the middle
    binsearch(yarr, 5); // Expected output: 5
    
    // Test case 2: element is not in the right half
    binsearch(yarr, 9); // Expected output: 9
    
    // Test case 3: element is not in the left half
    binsearch(yarr, 2); // Expected output: 2
    
    // Test case 4: element is not in the array
    binsearch(yarr, 11); // Expected output: no output
}

int main(int argc, int argv[])
{
    test_binsearch();
    return 0;
}