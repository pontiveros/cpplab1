//
//  Exercise_04.cpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/2/21.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "Exercise_04.hpp"

void Pointer_Base_Concept()
{
    long  v1 = 2021;
    long  v2 = 100;
    long *p2 = &v2;
    
    printf("Value of v1: %ld\n", v1);
    printf("Address of v1: %p\n\n", &v1);
    
    printf("Value of v2: %ld\n", v2);
    printf("Address of v2: %p\n", &v2);
    
    printf("Value of p2: %p\n", p2);
    printf("Content of v2 via p2: %ld\n", *p2);
    printf("Address of p2: %p\n\n", &p2);
    
    *p2 = 200;
    
    printf("Value of v2: %ld\n", v2);
    printf("Address of v2: %p\n", &v2);
    
    printf("Value of p2: %p\n", p2);
    printf("Content of v2 via p2: %ld\n", *p2);
    printf("Address of p2: %p\n\n", &p2);
}

void Array_And_Pointer()
{
    char text[] = "This is a message\0"; // Array of chars
    long size   = (long)strlen(text);
    char *ptr   = text;   // Pointer to and array of thars, ptr -> text
    
    for (int index = 0; index < size; index++) {
        printf("%c", text[index]);
    }
    
    printf("\n\n");
    
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++; // ptr = ptr -> next char
    }
    
    ptr = text; // Set the pointer at the first element
    printf("\n");
    
    while (*ptr != 0) {
        printf("%c", *ptr);
        ptr++; // ptr = ptr -> next char
    }
    
    printf("\n");
}

/* AUXILIAR FUNCTIONS */
long Duplicate(long x)
{
    return x * 2;
}

double TDiv(double a, double b)
{
    if (b == 0.0) {
        return 0.0;
    } else {
        return (a / b);
    }
}

double TMult(double a, double b)
{
    return (a * b);
}

double TSum(double a, double b)
{
    return (a + b);
}

double T(double a, double b)
{
    return (a - b);
}

void Pointer_To_Function()
{
    long (*pfn)(long);
    pfn = &Duplicate;
    
    printf("Duplicate result: %ld\n", pfn(200));
}

void Array_Of_Pointers()
{
    
}
