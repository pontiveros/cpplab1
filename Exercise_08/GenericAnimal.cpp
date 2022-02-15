//
//  GenericAnimal.cpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/20/21.
//

#include <iostream>
#include <ctype.h>
#include <string.h>

#include "GenericAnimal.hpp"

GenericAnimal::GenericAnimal()
: _family(NULL), _feet(0)
{
    std::cout << "Calling Generic Animal destructor without Parameters\n";
}

GenericAnimal::GenericAnimal(const char *family, int feet)
: _family(NULL), _feet(feet)
{
    std::cout << "Calling Generic Animal Constructor with Parameters\n";
    SetFamily(family);
}

GenericAnimal::~GenericAnimal()
{
    std::cout << "Calling Generic Animal Destructor\n";
    if (_family) {
        delete [] _family;
        _family = NULL;
    }
}

void GenericAnimal::PrintProperties()
{
    std::cout << "FAMILY: " << _family  << "\n";
    std::cout << "FEET: "   << _feet    << "\n";
    std::cout << "COMMUNICATION: " << GetCommunication() << "\n";
}

void GenericAnimal::SetFamily(const char* value)
{
    if (value != NULL) {
        if (_family != NULL) {
            delete [] _family;
            _family = NULL;
        }
        
        unsigned long length = strlen(value);
        _family = new char[length + 1];
        memset(_family, 0, length + 1);
        strncat(_family, value, length);
    }
}
