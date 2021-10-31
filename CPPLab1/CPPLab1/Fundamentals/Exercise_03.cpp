//
//  Exercise_03.cpp
//  CPPLab1
//
//  Created by Pedro Ontiveros on 10/29/21.
//

#include "Exercise_03.hpp"

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
