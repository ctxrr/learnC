#include <stdio.h>
#include <stdint.h>
int main(void)
{
    uint16_t c1,c2,c3,c4,c5 = 0;
    int8_t b = 0x82;
    c1 = (uint16_t)b;
    c2 = (int16_t)b;
    c3 = (int16_t)((uint8_t)b);
    c4 = (uint16_t)((uint8_t)b);
    c5 = (uint8_t)b;


    printf("%d\n",c1);
    printf("%d\n",c2);
    printf("%d\n",c3);
    printf("%d\n",c4);
    printf("%d\n",c5);
    return 0;
}
