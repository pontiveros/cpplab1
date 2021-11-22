//
//  Dog.hpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/21/21.
//

#ifndef __DOG_C935D187F0B998EF720390F85014ED1E_HPP__
#define __DOG_C935D187F0B998EF720390F85014ED1E_HPP__

#include "GenericAnimal.hpp"

class Dog : public GenericAnimal
{
public:
    Dog();
    Dog(const char *family, int feet, std::string _speciality);
    virtual ~Dog();

    virtual std::string GetCommunication();
    virtual void PrintProperties();
    
    std::string GetSpeciality();
    void SetSpeciality(std::string _speciality);
protected:
    std::string _speciality;
};

#endif /* __DOG_C935D187F0B998EF720390F85014ED1E_HPP__ */
