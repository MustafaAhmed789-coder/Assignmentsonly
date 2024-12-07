#include<stdio.h>

void swap(int a, int b){
    printf("Before Swapping a = %d & b = %d", a, b);


     a = a + b;
     b = a - b;
     a = a - b;


printf("After Swapping a = %d & b = %d", a, b);

}

int main(){
swap(4,6);
return 0;
}