#include <stdio.h>{
int a;
scanf("%d", &a);
if (a & (1<<31))
   printf("Set\n");
else
   printf("Not Set\n");
return 0
}