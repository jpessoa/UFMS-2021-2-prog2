#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);
    int hor, min, seg, temp;
    temp = 0;
    
    hor = (int)N / 3600;
    printf("%d", hor);
    temp = N - (hor * 3600);
    
    min = (int)temp / 60;
    printf(":%d", min);

    seg = temp - (min * 60);
    printf(":%d", seg);
    
    return 0;
}