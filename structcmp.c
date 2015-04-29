#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char    a;
    short    b;
    int    c;
}CmpTest;

int main()
{
    printf("len of CmpTest is:%d\n",sizeof(CmpTest));
    CmpTest t1, t2;
    printf("%d\t",memcmp(&t1, &t2, sizeof(CmpTest)));

    CmpTest t3, t4;
    memset(&t3, 0, sizeof(CmpTest));
    memset(&t4, 0, sizeof(CmpTest));
    printf("%d\n",memcmp(&t3, &t4, sizeof(CmpTest)));

    t1.a = 'a';
    t1.b = 1;
    t1.c = 123456;
    t2.a = 'a';
    t2.b = 1;
    t2.c = 123456;
    printf("%d\t",memcmp(&t1, &t2, sizeof(CmpTest)));

    t3.a = 'a';
    t3.b = 1;
    t3.c = 123456;
    t4.a = 'a';
    t4.b = 1;
    t4.c = 123456;
    printf("%d\n",memcmp(&t3, &t4, sizeof(CmpTest)));

    t2 = t1;
    printf("%d\t",memcmp(&t1, &t2, sizeof(CmpTest)));

    t4 = t3;
    printf("%d\n",memcmp(&t3, &t4, sizeof(CmpTest)));

    return 0;
}
