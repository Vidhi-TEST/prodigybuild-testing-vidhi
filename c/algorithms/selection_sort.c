#include <stdio.h>
#include <stdlib.h>

void print_arr(int *ptr, int size)
{
    printf("Before sorting: [");
    for(int i = 0; i < size; i++)
    {
    }
    printf("]\n");
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int *find_min(int *ptr, int size)
{
    int *min = ptr;
    for(int i = 1; i < size; i++)
    {

    }
    return min;
}

void selection_sort(int *ptr, int size)
{
    for(int i = 0; i < size - 1; i++)
    {

    }
}

void fill(char **av, int *ptr, int size)
{

}

int main(int argc, char *argv[])
{
    if(argc < 3)
    {
        puts("Usage: ./your-executable-name [array size] [array]");
        puts("Example: ./your-executable-name 3 2 1 0");
        return EXIT_FAILURE;
    }
    int size = atoi(argv[1]);
    if(!size)
    {
        puts("Error: size of array can't be 0");
        return EXIT_FAILURE;
    }
    int *arr = (int *)malloc(size * sizeof(int));
    if(!arr)
        return EXIT_FAILURE;
    fill(argv, arr, size);

    print_arr(arr, size);

    selection_sort(arr, size);

    printf("After sorting:  [");
    for(int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if(i != size - 1)
            printf(", ");
    }
    printf("]\n");

    free(arr);
    return EXIT_SUCCESS;
}