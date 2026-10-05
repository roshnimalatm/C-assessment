#include <stdio.h>
int main()
{
    unsigned char n;
    printf("eneter the num:");
    scanf("%d",&n);
    n= n | (1<<2);
    n= n& ~(1<<5);
    n= n^(1<<0);
    printf("answer:%d\n",n);
    return 0;
}
