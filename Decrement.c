#include<stdio.h>

int main()
{
    int x = 10;
    int y = x--;

    printf("X = %d\n", x);//9
    printf("X = %d\n", --x);//8
    printf("X = %d\n", x);//8
    printf("Y = %d\n", y);//10

    return 0;
}

