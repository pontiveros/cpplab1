//
//  Bird.hpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/21/21.
//

#ifndef __BIRD_EBE418AE757B121B0D636041981FC1D1_HPP__
#define __BIRD_EBE418AE757B121B0D636041981FC1D1_HPP__

#include "GenericAnimal.hpp"

class Bird : public GenericAnimal
{
public:
    Bird();
    Bird(const char *family, int feet, long maxFlyDistance = 0);
    virtual ~Bird();

    virtual std::string GetCommunication();
    virtual void PrintProperties();
    
    inline long GetMaxFlyDistance() { return _maxFlyDistance; }
    inline void SetMaxFlyDistance(long maxFlyDistance) { _maxFlyDistance = maxFlyDistance; }
    
protected:
    long _maxFlyDistance;
};

#endif /* __BIRD_EBE418AE757B121B0D636041981FC1D1_HPP__ */
