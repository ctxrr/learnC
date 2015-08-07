// pragma_directives_pack.cpp
#include <stddef.h>
#include <stdio.h>

typedef struct S {
   int i;   // size 4
   short j;   // size 2
   double k;   // size 8
}S;

#pragma pack(2)
typedef struct T {
   int i;
   short j;
   double k;
}T;

int main() {
   printf("%d ", offsetof(S, i));
   printf("%d ", offsetof(S, j));
   printf("%d\n", offsetof(S, k));

   printf("%d ", offsetof(T, i));
   printf("%d ", offsetof(T, j));
   printf("%d\n", offsetof(T, k));
}
