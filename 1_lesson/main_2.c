#include<stdio.h>
int main()
{
   int a;
   int *p;
   p = &a;
   a = 5;
   printf("The value stored in p is %d\n",p);
   printf("The address of a is %d\n", &a);
   printf("The address of p is %d\n", &p);
   printf("Value pionted by p is %d\n", *p);
   *p = 8;
   printf("Changed the value of a using pointer p the new value is %d\n", a);
   return 0;
}
