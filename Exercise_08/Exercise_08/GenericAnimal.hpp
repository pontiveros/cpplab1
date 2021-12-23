//
//  GenericAnimal.hpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/20/21.
//

#ifndef __GENERICANIMAL_CF8B2A1625EA01178DCD87D348A4970B_HPP__
#define __GENERICANIMAL_CF8B2A1625EA01178DCD87D348A4970B_HPP__

#include <iostream>

class GenericAnimal {
public:
    GenericAnimal();
    GenericAnimal(const char *family, int feet);
    virtual ~GenericAnimal();
    
    virtual std::string GetCommunication()=0;
    virtual void PrintProperties();

    inline long GetInstance()  { return _instance; }
protected:
    void SetFamily(const char *family);
    
    int _feet;
    char *_family;
private:
    long _instance;
};

#endif /* __GENERICANIMAL_CF8B2A1625EA01178DCD87D348A4970B_HPP__ */
