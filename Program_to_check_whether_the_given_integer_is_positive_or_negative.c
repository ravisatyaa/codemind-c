#include <stdio.h>

int main()
{

    int num;
    scanf("%d", &num);
    if (num <= 0.0)
    {
        printf("Negative Number");
    }
    else
    {
        printf("Positive Number");
    }
    return 0;
}