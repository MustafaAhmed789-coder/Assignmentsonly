#include<stdio.h>
int main(){
int a[] = {10,11,-1,56,67,5,4,12};
int *p;
int *q;
p = a;
q = &a[0] + 3;
printf("%d\n%d\n%d\n%d\n", (*p)++, (*p)++, *(p));
printf("%d\n", *p);
printf("%d\n", (*p)++);
printf("%d\n", (*p)++);
printf("%d\n", *q + 2);



return 0;
}