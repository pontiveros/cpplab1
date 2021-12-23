//
//  Cat.hpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/21/21.
//

#ifndef __CAT_FA3EBD6742C360B2D9652B7F78D9BD7D_HPP__
#define __CAT_FA3EBD6742C360B2D9652B7F78D9BD7D_HPP__

#include "GenericAnimal.hpp"

class Cat : public GenericAnimal
{
public:
    Cat();
    Cat(const char *family, int feet, std::string mood);
    virtual ~Cat();

    virtual std::string GetCommunication();
    virtual void PrintProperties();
    
protected:
    std::string _mood;
};

#endif /* __CAT_FA3EBD6742C360B2D9652B7F78D9BD7D_HPP__ */
