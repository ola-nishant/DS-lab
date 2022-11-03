#include <stdio.h>
int main()
{
    int arr[10];
    printf("%d",*(&arr + 1) - arr);
    return 0;
}