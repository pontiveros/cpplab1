//
//  Ex_05_MemAlloc.cpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/13/21.
//  Copyright © 2021 Florencia Ontiveros. All rights reserved.
//

#include "Ex_05_MemAlloc.hpp"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE_OF_BUFFER      256
#define SIZE_MESSAGE_ARRAY  5

void AllocMemForPrimitive()
{
    long     *ptrLong = NULL;
    double *ptrDouble = NULL;
    
    ptrLong  = new long;    // Reserve memory to store long value
    *ptrLong = 128398219837918;
    
    ptrDouble  = new double; // Reserve memory to store double value
    *ptrDouble = 198172983.324872;
    
    printf("long value: %ld\n", *ptrLong);
    printf("double value: %.7f\n", *ptrDouble);
    
    delete ptrLong;     // free up memory
    delete ptrDouble;   // free up memory
    
    ptrLong   = NULL;   // set free pointer to null
    ptrDouble = NULL;   // set free pointer to null
    
    *ptrLong   = 3000;  // ERROR: mem has been dealloc
    
    printf("long value: %ld\n", *ptrLong);
}

void AllocMemForString()
{
    unsigned long length = 0;
    char buffer[SIZE_OF_BUFFER];
    char *ptrString = NULL;
    
    memset(buffer, 0, SIZE_OF_BUFFER);
    
    printf("Insert your message:");
    scanf("%[^\n]s", buffer);
    
    length = (unsigned long)strlen(buffer);
    ptrString = new char[length + 1];       // alloc mem for the message
    memset(ptrString, 0, length + 1);
    strncpy(ptrString, buffer, length);
    
    printf("Your message is: %s\n", ptrString);
    
    delete [] ptrString;    // dealloc mem
}

void AuxPrintArrayMessage(char **message)
{
    for (int i = 0; i < SIZE_MESSAGE_ARRAY; i++) {
        printf("Text line %d : %s\n", (i + 1), message[i]);
    }
}

void AllocMemForArrayOfString()
{
    char **message = new char *[SIZE_MESSAGE_ARRAY]; // alloc mem for array of pointers
    
    char buffer[SIZE_OF_BUFFER];
    
    for (int i = 0; i < SIZE_MESSAGE_ARRAY; i++) {
        fflush(stdin);
        memset(buffer, 0, SIZE_OF_BUFFER);
        
        printf("Insert text [%d]:", (i + 1));
        scanf("%[^\n]s", buffer);
        
        long msgLen = (long)strlen(buffer);
        
        message[i] = new char[msgLen + 1]; // alloc mem in loop
        memset(message[i], 0, msgLen + 1);
        strncpy(message[i], buffer, msgLen);
    }
    
    AuxPrintArrayMessage(message);
    
    for (int i = 0; i < SIZE_MESSAGE_ARRAY; i++) {
        delete [] message[i]; // delete mem in loop
    }
    
    delete [] message; // delete mem for array of pointers
}
