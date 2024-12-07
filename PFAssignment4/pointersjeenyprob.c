#include<stdio.h>
int main(){
    int *p,*q;
int a[]={1,2,-1,4,5,7,7};
p = a;
printf("%d\n",*p);
printf("%d %d %d %d \n",*p, (*p)++, *p++,*++p);// yaha pe execution right to left hogi
/*isme increment pointer ki value mein hoga*/
q = p + 3;// ++1 => 1++ => (2)+1 => 2
//q=7 
printf("%d %d %d \n",  *p +*q,*--p + 3, *q-3);
return 0;
}