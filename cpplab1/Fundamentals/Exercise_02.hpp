//
//  Exercise_02.hpp
//  CPPLab1
//
//  Created by Pedro Ontiveros on 10/29/21.
//

#ifndef Exercise_02_hpp
#define Exercise_02_hpp

#include <iostream>

void Function_Sample_01();
void Function_Sample_02();

void Function_Parameters_Sample();
void Function_ParameterValue_Sample(int value);
void Function_ParameterReference_Sample(int &value);
void Function_ParameterPointer_Sample(long *value);
void Function_ParameterDefault_Sample(int value = 100);

void Function_Recursive_Sample();
int  Function_Factorial_Sample(int value);

void Function_Return_Sample();
double Function_Average_Sample(double numbers[], int lenght);

// Overload functions
void Function_Overloading_Sample();
long multi(long a, long b);
double multi(double a, double b);

#endif /* Exercise_02_hpp */
