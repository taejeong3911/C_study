#include<stdio.h>

int multi8_bitshift(int x)
{
    return x << 3;
}

void cycle_do(int y, int z)
{
    int i;
    scanf_s("%d", &i);
    int count = 1;
    do {
                
        z = y << count++;

    } while (count <= i);

    printf("%d", z);


    }
    int main()
         {
        int a;
        scanf_s("%d", &a);
        printf("%d\n", multi8_bitshift(a));

        int b = 0;
        cycle_do(a, b);

        return 0;
    }