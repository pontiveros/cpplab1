//
//  Exercise_03.cpp
//  CPPLab1
//
//  Created by Pedro Ontiveros on 10/29/21.
//

#include "Exercise_03.hpp"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define STRING_BUFFER 256

void Constant_CString_Sample()
{
    char constant_string[] = "Constant String";
    printf("%s\n", constant_string);
}

void Reading_CString_Sample()
{
    char message[STRING_BUFFER];
    printf("Insert your message here: ");
    scanf("%[^\n]s", message);
    printf("Your message is: %s\n", message);
}

void String_C_Style_Sample()
{
    Constant_CString_Sample();
    Reading_CString_Sample();
}

void IterateString_C_Sample()
{
    char message[] = "hello, this is a message";
    int lenght = (int)strlen(message);
    
    printf("%s\n", message);
    
    for (int index = 0; index < lenght; index++) {
        if (message[index] == 'e') {
            continue;
        }
        message[index] = toupper(message[index]);
    }
    
    printf("%s\n", message);
}
