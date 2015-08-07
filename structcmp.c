#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*When you declare a struct, will insert padding between members to
  ensure that they are aligned to appropriate addresses in memory*/

//define two struct CmpTest and PackTest

typedef struct
{
    char    a;
    short    b;
    int    c;
}CmpTest;//pack with compiler default value:4

#pragma pack(1)
typedef struct
{
    char    a;
    short    b;
    int    c;
}PackTest;//pack with the value that #pragma pack set:1

//test code
int main()
{
    // 1.show the size of them
    printf("len of CmpTest is:%d\n",sizeof(CmpTest));
    printf("len of PackTest is:%d\n",sizeof(PackTest));

    // 2.init struct variable without assignment
    CmpTest t1, t2;
    PackTest p1, p2;
    printf("Test 1: without memset\t");
    printf("%d\t",memcmp(&t1, &t2, sizeof(CmpTest)));
    printf("%d\n",memcmp(&p1, &p2, sizeof(PackTest)));

    // 3.init struct variable with memset
    CmpTest t3, t4;
    PackTest p3, p4;
    memset(&t3, 0, sizeof(CmpTest));
    memset(&t4, 0, sizeof(CmpTest));
    memset(&p3, 0, sizeof(PackTest));
    memset(&p4, 0, sizeof(PackTest));
    printf("Test 2:   with memset\t");
    printf("%d\t",memcmp(&t3, &t4, sizeof(CmpTest)));
    printf("%d\n",memcmp(&p3, &p4, sizeof(PackTest)));

    // 4.assign values to struct member without memset
    t1.a = 'a';
    t1.b = 1;
    t1.c = 123456;
    t2.a = 'a';
    t2.b = 1;
    t2.c = 123456;

    p1.a = 'a';
    p1.b = 1;
    p1.c = 123456;
    p2.a = 'a';
    p2.b = 1;
    p2.c = 123456;
    printf("Test 3:with assignment\t");
    printf("%d\t",memcmp(&t1, &t2, sizeof(CmpTest)));
    printf("%d\n",memcmp(&p1, &p2, sizeof(PackTest)));

    // 5.assign values to struct member with memset
    t3.a = 'a';
    t3.b = 1;
    t3.c = 123456;
    t4.a = 'a';
    t4.b = 1;
    t4.c = 123456;

    p3.a = 'a';
    p3.b = 1;
    p3.c = 123456;
    p4.a = 'a';
    p4.b = 1;
    p4.c = 123456;
    printf("Test 4:with assignment\t");
    printf("%d\t",memcmp(&t3, &t4, sizeof(CmpTest)));
    printf("%d\n",memcmp(&p3, &p4, sizeof(PackTest)));

    // 6.last try
    printf("Test 5:               \t");
    t2 = t1;
    printf("%d\t",memcmp(&t1, &t2, sizeof(CmpTest)));

    t4 = t3;
    printf("%d\n",memcmp(&t3, &t4, sizeof(CmpTest)));

    return 0;
}
