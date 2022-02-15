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

#include <iostream>

using namespace std;

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

void C_String_Style()
{
    Constant_CString_Sample();
    Reading_CString_Sample();
}

void C_String_Iterate_Sample2()
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

void ConvertStringToUpper(char *message, int length)
{
    for (int index = 0; index < length; index++) {
        if (message[index] == 'e') {
            continue;
        }
        message[index] = toupper(message[index]);
    }
}

void C_String_Iterate_Sample()
{
    char message[] = "hello, this is a message";
    int lenght = (int)strlen(message);
    
    printf("%s\n", message);
    ConvertStringToUpper(message, lenght);
    printf("%s\n", message);
}

void CPP_String_Object()
{
    string message = "Hello, this is a message from C+PP string";
    cout << message << endl;
}

void CPP_String_Concatenation()
{
    string str1 = "Hello, ";
    string str2 = "Florencia!";
    
    cout << str1 + str2 << endl;
}

void CPP_String_ReadFromKeyb()
{
    string input;
    
    cout << "Insert text here: ";
    cin  >> input; // This way is NOT able to read spaces between words
    cout << "Your wrote: " << input << endl;
}

void CPP_String_ReadFromKeybEx()
{
    string input;
    
    cout << "Insert text here: ";
    getline(std::cin >> std::ws, input); // This way is able to read spaces between words
    cout << "Your wrote: " << input << endl;
}

void CPP_String_Iteration()
{
    string message = "Hello Florencia!";
    
    cout << message << "\n";
    
    for (int index = 0; index < message.length(); index++) {
        cout << message[index] << ' ';
    }
    
    cout << "\n";
}

void CPP_String_Iteration2()
{
    string input;
    
    cout << "Insert text: ";
    getline(std::cin >> std::ws, input); // This way is able to read spaces between words
    
    for (const char c: input) {
        cout << (char)toupper(c); // Is necessary casting
    }
    
    cout << "\n";
}
