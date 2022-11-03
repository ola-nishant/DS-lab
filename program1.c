#include <stdio.h>
#include <process.h>

// main menu
int menu(int a)
{
    printf("Print 1 for insertion\n");
    printf("Print 2 for deletion\n");
    printf("Print 3 for traversing\n");
    printf("Print 4 for linear search\n");
    printf("Print 5 for selection sort\n");
    printf("Print 9 to exit\n");
    scanf("%d", a);
}
// length of array
int length(int arr[])
{
    for (int i = 0; i < ; i++)
    {
        /* code */
    }
}

// functions
int insert(int array[])
{
    if ()
    {
        printf("The array is empty");
    }
    else if (sizeof(array) == 40)
    {
        printf("The array is 1 unit long");
    }
    else
    {
        printf("The array is really long");
    }
    printf("insert is running");
};
// int delete();
// int traverse();
// int search();
// int sort();

// evaluates menu input
int evaluateMenu(int MenuInput, int array[])
{
    switch (MenuInput)
    {
    case 1:
        insert(array);
        break;
        // case 2:
        //     delete();
        //     break;
        // case 3:
        //     traverse();
        //     break;
        // case 4:
        //     search();
        //     break;
        // case 5:
        //     sort();
        //     break;
        // case 9:
        //     exit(0);
        //     break;

    default:
        break;
    }
}

int main()
{
    int process = 0, menuInput, arr[10], n, length;
    while (process == 0)
    {
        menu(menuInput);
        evaluateMenu(menuInput, arr);
    }
    return 0;
}