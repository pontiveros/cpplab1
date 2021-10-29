//
//  Exercise_02.cpp
//  CPPLab1
//
//  Created by Pedro Ontiveros on 10/29/21.
//

#include "Exercise_02.hpp"

using namespace std;

void Function_Sample_01()
{
    cout << "scope: function sample 01 - begin" << endl;
    Function_Sample_02();
    cout << "scope: function sample 01 - end" << endl;
}

void Function_Sample_02()
{
    cout << "scope: function sample 02" << endl;
}

void Function_ParametersSample()
{
    int v1 = 10;
    cout << v1 << "\n";
    Function_ParameterValue_Sample(v1);
    cout << v1 << "\n";
    Function_ParameterReference_Sample(v1);
    cout << v1 << "\n";
    
    Function_ParameterDefault_Sample();
    Function_ParameterDefault_Sample(120);
}

void Function_ParameterValue_Sample(int value)
{
    value = 20;
    cout << value << "\n";
}

void Function_ParameterReference_Sample(int &value)
{
    value = 50;
    cout << value << "\n";
}

void Function_ParameterDefault_Sample(int value)
{
    cout << value << "\n";
}
