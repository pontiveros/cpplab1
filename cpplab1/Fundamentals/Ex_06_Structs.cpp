//
//  Ex_05_Structs.cpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/12/21.
//  Copyright © 2021 Florencia Ontiveros. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Ex_06_Structs.hpp"

#define SIZE_OF_BUFFER 256


const char *GetStringFromKeyboard(const char *prompt = NULL)
{
    unsigned long inputLen = 0;
    char *value;
    char buffer[SIZE_OF_BUFFER];
    
    fflush(stdin);
    memset(buffer, 0, SIZE_OF_BUFFER);
    
    printf("%s: ", (prompt == NULL) ? "Input" : prompt);
    scanf("%[^\n]s", buffer);
    
    inputLen = (unsigned long)strlen(buffer);
    value = new char[inputLen + 1];
    memset(value, 0, inputLen + 1);
    strncpy(value, buffer, inputLen);
    
    return value;
}

float GetFloatFromKeyboard(const char *prompt = NULL)
{
    float value = 0.0;
    fflush(stdin);
    
    printf("%s: ", (prompt == NULL) ? "Input" : prompt);
    scanf("%f", &value);
    
    return value;
}

long GetLongFromKeyboard(const char *prompt = NULL)
{
    long value = 0;
    fflush(stdin);
    
    printf("%s: ", (prompt == NULL) ? "Input" : prompt);
    scanf("%ld", &value);
    
    return value;
}

void PrintProduct(struct TProduct product)
{
    printf("Product Code: %ld\n", product.code);
    printf("Product Name: %s\n", product.name);
    printf("Product Description: %s\n", product.description);
    printf("Product Price: %f\n", product.price);
}

void Struct_Fundamentals()
{
    struct TProduct prod1, prod2;
    
    prod1.code        = GetLongFromKeyboard("Enter Product Code");
    prod1.name        = GetStringFromKeyboard("Enter Product Name");
    prod1.description = GetStringFromKeyboard("Enter Product Description");
    prod1.price       = GetFloatFromKeyboard("Enter Product Price");
    
    PrintProduct(prod1);
    
    prod2 = prod1;
    
    PrintProduct(prod2);
}
