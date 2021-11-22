//
//  POO_Exercises.cpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/19/21.
//

#include "GenericAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Bird.hpp"
#include "POO_Exercises.hpp"


void Basic_Classes_Concept::Exercise_01()
{
    Cat *cat = new Cat("Common cat", 4, "friendly");
    cat->PrintProperties();
    delete cat;
}

void Basic_Classes_Concept::Exercise_02()
{
    GenericAnimal *animal[] = {new Cat("Snow leopard", 4, "aggresive"),new Bird("Canary", 2, 200), new Cat("Common Cat", 4, "friendly"), new Dog("Galgo", 4, "racing")};
    
    for (int i = 0; i < 4; i++) {
        animal[i]->PrintProperties();
    }
}
