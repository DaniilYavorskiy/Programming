#include <stdio.h>
int N = 10;
int mas[] = {54, -81, 8, -43, 65, 30, 99, -89, -5, 15};
int i = 0;
int j = 0;
void func()
{
    if (j < N)
    {
        if (mas[j] < 0)
        {
            printf("%d ", mas[j]);
            j++;
            func();
        }
        else
        {
            j++;
            func();
        }
    }

    if (i < N)
    {
        if (mas[i] > 0)
        {
            printf("%d ", mas[i]);
            i++;
            func();
        }
        else
        {
            i++;
            func();
        }
    }
}

int main(void)
{
    func();
    return 0;
}
