#include <stdio.h>

#define VAR(ming,xing) ming##xing

char VAR(wei,_hu)=27;
int main(void)
{
    printf("%d\n", wei_hu);
    return 0;
}
