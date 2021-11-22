//
//  Dog.cpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/21/21.
//

#include "Dog.hpp"

Dog::Dog()
: GenericAnimal()
{
    std::cout << "Calling Dog destructor without Parameters\n";
}

Dog::Dog(const char *family, int feet, std::string speciality)
: GenericAnimal(family, feet), _speciality(speciality)
{
    std::cout << "Calling Dog Constructor with Parameters\n";
}

Dog::~Dog()
{
    std::cout << "Calling Dog Destructor\n";
}

std::string Dog::GetCommunication()
{
    return "barking";
}

void Dog::PrintProperties()
{
    std::cout << "===== Dog's Properties =====\n";
    GenericAnimal::PrintProperties();
    std::cout << "SPECIALITY: " << _speciality << "\n\n";
}
