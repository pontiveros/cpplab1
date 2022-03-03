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
: _x(0.0), _y(0.0), _instance(0)
{
    _instance = (long)rand();
}

TPoint::TPoint(float x, float y)
: _x(x), _y(y), _instance(0)
{
    _instance = (long)rand();
}

TPoint::~TPoint()
{

}

void TPoint::Print()
{
    std::cout << "INSTANCE: " << _instance << " \tVALUES: [x: " << _x << " , y: " << _y << "]\n";
}

TPoint TPoint::operator +(const TPoint &p)
{
    TPoint tmp;
    tmp._x = this->_x + p._x;
    tmp._y = this->_y + p._y;
    return tmp;
}


TPoint TPoint::operator -(const TPoint &p)
{
    TPoint tmp;
    tmp._x = this->_x - p._x;
    tmp._y = this->_y - p._y;
    return tmp;
}

TPoint TPoint::operator /(const TPoint &p)
{
    TPoint tmp;
    tmp._x = this->_x / p._x;
    tmp._y = this->_y / p._y;
    return tmp;
}
TPoint TPoint::operator *(const TPoint &p)
{
    TPoint tmp;
    tmp._x = this->_x * p._x;
    tmp._y = this->_y * p._y;
    return tmp;
}

TPoint TPoint::operator =(const TPoint *p)
{
    TPoint tmp;
    tmp._x = p->_x;
    tmp._y = p->_y;
    return tmp;
}