//
//  Cat.cpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/21/21.
//

#include <iostream>
#include "Cat.hpp"

Cat::Cat()
: GenericAnimal()
{
    std::cout << "Calling Cat destructor without Parameters\n";
}

Cat::Cat(const char *family, int feet, std::string mood)
: GenericAnimal(family, feet), _mood(mood)
{
    std::cout << "Calling Cat Constructor with Parameters\n";
}

Cat::~Cat()
{
    std::cout << "Calling Cat Destructor\n";
}

 std::string Cat::GetCommunication()
 {
    return "meowing";
 }

void Cat::PrintProperties()
{
    std::cout << "===== Cat's Properties =====\n";
    GenericAnimal::PrintProperties();
    std::cout << "MOOD: " << _mood << "\n\n";
}
    
