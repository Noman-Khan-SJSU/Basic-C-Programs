/*
//Pointers

#include<stdio.h>
#include <stdlib.h>

void print(char* c){
    while (*c != '\0'){
        printf("%c", *c);
        c++;
    }
    printf("\n\n\n");
}

int* add(int* a, int* b){
    int* sum = (int*)malloc(sizeof(int));  //Creating dynamic allocated memory (or using global pointer variables) when using pointer as return type is safe since they are created on heap (where user would have to de-allocate memory explicitly, global variables have separate segment in memory). Otherwise, local pointers (defined in a function) can get de-allocated, after the add function finishes and the control returns to the main function, since its stack frame would no longer exist, where the variable, sum and its address lived.
    *sum = *a + *b;                        // Therefore, following isn't safe*  // int sum = *a + *b;
    return sum;                                                                // return &sum;
}

int Add(int a, int b){
    return a+b;
}

void PrintHello(){
    printf("Hello\n");
}

void Print(char* name){
    printf("Hi %s\n\n\n", name);
}

void main() {

    //Pointers Arithmetic
    int a=1025;
    int *p;
    p = &a;
    printf("Address = %d and value =%d\n", p, *p);
    printf("Address of p+1 = %d and value of p+1 = %d \t", p+1, *(p+1)); //value of (p+1) will have a garbage value since it is not initialized
    printf("Because size of an integer data type is %d bytes\n", sizeof(int));
    char *c;
    c = (char*)p; //typecasting is needed since pointers are strongly typed variables
    //1025 is stored in memory as = 00000000 00000000 00000100 00000001
    printf("Address = %d and value =%d\n", c, *c);  //value 0f *c is calculated from the first byte of 1025 which is 1
    printf("Address of c+1 = %d and value of c+1 = %d \t", c+1, *(c+1)); //value 0f *(c+1) is calculated from the second byte of 1025 which is 4
    printf("Because size of a character data type is %d byte\n\n\n", sizeof(char));


    // Void Pointer or Generic Pointer.
    int ab =10;
    int *pt;
    pt = &ab;
    // Void/Generic pointer.
    void *v;
    v=pt;
    printf("Address = %d\n\n\n",v);
    //Value at address(*) operator is invalid for void pointers since compiler doesn't know how many bytes to read to calculate the value.
    //For the same reason, pointer arithmetic (addition/subtraction e.g. v+2/v-1) is also invalid for these generic pointers.


    //Pointers to Pointers
    int x=5;
    int* po=&x;
    printf("x = %d\n", x);
    *po=6;
    int** q = &po;
    int*** r = &q;
    printf("%d\n", *po);
    printf("%d\n", *q);
    printf("%d\n", **q);
    printf("%d\n", **r);
    printf("%d\n", ***r);
    ***r =10;
    printf("x = %d\n", x);
    (**q) = (*po) + 2;
    printf("x = %d\n\n\n", x);


    //Arrays and Pointers
    int A[] = {1,2,3,4,5};
    printf("%d\n", &A[0]);
    printf("%d\n", *A);
    printf("%d\n", A);
    printf("%d\n\n", A[0]);

    int B[] = {6,7,8,9,10};
    int i;
    for (i=0; i<5; i++){
        printf("%d\n", &B[i]);
        printf("%d\n", B+i);
        printf("%d\n", *(B+i));
        printf("%d\n\n", B[i]);

    }
    // poi++ is a valid statement where as arr++ will be an invalid statement, where poi and arr are as follow:
    int arr[] = {1,2,3};
    int *poi = arr;


    //Printing character array(String) using Pointer
     char ch[] = "Hello";
     print(ch);


    //Pointers as function return types
    int e=3, f=4;
    int* sum = add(&e,&f);
    printf("Sum = %d\n\n\n", *sum);


    //Pointers to functions
    int g;
    int (*ptr)(int,int);        // pointer to function that takes (int,int) as argument and who's return type is int. //Parenthesis in "(*ptr)" is important, otherwise it would be a function named ptr with an int pointer as its return type.
    ptr = &Add;                 // can also be written as " ptr = Add; ". Ampersand (&) is optional, since function name alone will return a pointer(its address).
    g = (*ptr)(2,3);            // de-referencing and executing the function with appropriate arguments. // cam also be written as " c = p(2,3) ", just as function name.
    printf("%d\n", g);

    void (*pntr)();
    pntr = PrintHello;
    pntr();

    void (*pnter)(char*);
    pnter = Print;
    pnter("Noman");


}

*/
