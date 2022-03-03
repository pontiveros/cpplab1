//  TPoint.cpp
//  Exercise_10
//
//  Created by Pedro Ontiveros on 03/02/22.
//

///////////////////////////////////////////////////////////////////////////////////
//                                                                               //
//                                                                               //
//                                                                               //
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "TPoint.h"

TPoint::TPoint()
: _x(0.0), _y(0.0)
{
    _instance = (long)rand();
}

TPoint::~TPoint()
{

}

void TPoint::Print()
{
    std::cout << "INSTANCE: " << _instance << " VALUES: [x: " << _x << " , y: " << _y << "]\n";
}