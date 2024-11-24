// 5. Write a C program that uses functions to perform the following operations:
// i) Reading a complex number
// ii) Writing a complex number
// iii) Addition of two complex numbers
// iv) Multiplication of two complex numbers
// (Note: represent complex numbers using a structure.


// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261

#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

void readComplex(struct Complex *c) {
    printf("Enter real part: ");
    scanf("%f", &c->real);
    printf("Enter imaginary part: ");
    scanf("%f", &c->imag);
}

void writeComplex(struct Complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

int main() {
    struct Complex num1, num2, result;

    printf("Enter first complex number:\n");
    readComplex(&num1);
    
    printf("Enter second complex number:\n");
    readComplex(&num2);

    printf("\nFirst Complex Number: ");
    writeComplex(num1);
    
    printf("Second Complex Number: ");
    writeComplex(num2);

    result = addComplex(num1, num2);
    printf("\nSum of the complex numbers: ");
    writeComplex(result);

    result = multiplyComplex(num1, num2);
    printf("\nProduct of the complex numbers: ");
    writeComplex(result);

    return 0;
}
