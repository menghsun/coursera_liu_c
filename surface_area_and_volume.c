#include <stdio.h>

int main(void)
{
    int length, width, height;
    scanf("%d",&length);
    scanf("%d",&width);
    scanf("%d",&height);
    printf("%d %d\n", 2 * (length*width + width*height + height * length), length*width*height);
    return 0;
}

