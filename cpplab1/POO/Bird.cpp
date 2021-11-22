//
//  Bird.cpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/21/21.
//

#include <iostream>
#include "Bird.hpp"

Bird::Bird()
: GenericAnimal()
{
    std::cout << "Calling Bird destructor without Parameters\n";
}

Bird::Bird(const char *family, int feet, long maxFlyDistance)
: GenericAnimal(family, feet), _maxFlyDistance(maxFlyDistance)
{
    std::cout << "Calling Bird Constructor with Parameters\n";
}

Bird::~Bird()
{
    std::cout << "Calling Bird Destructor\n";
}

std::string Bird::GetCommunication()
{
    return "singing";
}

void Bird::PrintProperties()
{
    std::cout << "===== Bird's Properties =====\n";
    GenericAnimal::PrintProperties();
    std::cout << "MAX FLY DISTANCE: " << _maxFlyDistance << "\n\n";
}
    
