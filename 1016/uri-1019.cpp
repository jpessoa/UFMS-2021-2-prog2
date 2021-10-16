#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);
    int hor, min, seg, temp;
    if (N >= 3600)
    {
        hor = N / 3600;
    }
    else if (N >= 60)
    {
        min = N / 60;
    }
    else
    {
        seg = N - (min * 60);
    }
    

    printf("H = %d M= %d S= %d", hor, min, seg);

    return 0;
}