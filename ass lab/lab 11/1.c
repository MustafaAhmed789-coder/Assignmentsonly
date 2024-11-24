// Q1. For each of the following, write a single statement that performs the indicated
// task. Assume that long integer variables value1 and value2 have been defined and
// that value1 has been initialized to 200000. a) Define the variable lPtr to be a
// pointer to an object of type long. b) Assign the address of variable value1 to
// pointer variable lPtr. c) Print the value of the object pointed to by lPtr. d) Assign
// the value of the object pointed to by lPtr to variable value2. e) Print the value of
// value2. f) Print the address of value1. g) Print the address stored in lPtr. Is the
// value printed the same as the address of value1?

// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261

#include <stdio.h>

int main() {
    long *ptr;


    long value1 = 200000; 
    ptr = &value1;        
    printf("The value pointed to by ptr: %ld\n", *ptr);

    long value2;
    value2 = *ptr; 
    printf("The value of value2: %ld\n", value2);
    printf("The address of value1: %p\n", (void *)&value1);
    printf("The address stored in ptr: %p\n", (void *)ptr);

    printf("Is the address stored in ptr the same as the address of value1? %s\n", 
           (ptr == &value1) ? "Yes" : "No");

    return 0;
}
