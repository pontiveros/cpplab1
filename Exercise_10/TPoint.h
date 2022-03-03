
//  TPoint.h
//  Exercise_10
//
//  Created by Pedro Ontiveros on 03/02/22.
//

///////////////////////////////////////////////////////////////////////////////////
// compile release: clang++ -Wall -std=c++11 source1... -o out.file              //
// compile debug: clang++ -Wall -std=c++11 -g main.cpp source_01.cpp -o out.file //
// debugger: lldb {prog.debug (program name)}                                    //
///////////////////////////////////////////////////////////////////////////////////

#ifndef __TPOINT_20220302_F6EFC2D1850C997A0CD5E30D68F2BEB5_H__
#define __TPOINT_20220302_F6EFC2D1850C997A0CD5E30D68F2BEB5_H__

class TPoint {
public: 
             TPoint();
             TPoint(float x, float y);
    virtual ~TPoint();

    // inline functions 
    inline float GetX() {   return _x; }
    inline float GetY() {   return _y; }
    inline  void SetX(float x) { _x = x; } 
    inline  void SetY(float y) { _y = y; } 

    inline  const long GetInstance() { return _instance; }

    void Print();
    TPoint operator +(const TPoint &p);
    TPoint operator -(const TPoint &p);
    TPoint operator /(const TPoint &p);
    TPoint operator *(const TPoint &p);
    TPoint operator =(const TPoint *p);
protected: 

    float _x, _y;
    long _instance;
};
#endif /* __TPOINT_20220302_F6EFC2D1850C997A0CD5E30D68F2BEB5_H__ */