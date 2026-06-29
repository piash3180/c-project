
#include<stdio.h>

int main()
{
    int x = 10;
    int y = x++;

    printf("X = %d\n", x);//11
    printf("X = %d\n", ++x);//12
    printf("X = %d\n", x);//12
    printf("Y = %d\n", y);//10

    return 0;
}
