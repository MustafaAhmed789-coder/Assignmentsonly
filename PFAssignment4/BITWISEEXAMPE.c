#include<stdio.h>
void bar(int* ptr1, int*ptr2){
    *ptr1<<=2;
    *ptr2<<3;
}

void foo(int* ptr2, int* ptr1){
    *ptr1<<=2;
    *ptr2<<=3;
    bar(ptr1,ptr2);
}

int main(){
    int y = 1024>>2*3;
    int x = 1024*2>>3;
    int* ptr1 = &x;
    int* ptr2 = &y;
    foo(ptr1, ptr2);
    printf("%d \n %d", x,y); 
return 0;
}