#include <stdio.h>

int main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d", &marks);
    if (marks <= 100 && marks >= 90)
    {
        printf("grade A");
    }
    else if (marks <= 90 && marks >= 80)
    {
        printf("grade B");
    }
    else if (marks <= 80 && marks >= 70)
    {
        printf("grade C");
    }
    else
    {

        printf("fail");
    }

    return 0;
}