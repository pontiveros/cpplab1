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

void Function_Parameters_Sample()
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

void Function_Recursive_Sample()
{
    int value, result = 0;
    
    cout << "Insert an integer number: ";
    cin >> value;
    
    result = Function_Factorial_Sample(value);
    
    cout << "Factorial of " << value << " is " << result << "\n";
}

int  Function_Factorial_Sample(int value)
{
    if (value == 1) {
        return 1;
    } else {
        return value * Function_Factorial_Sample(value - 1);
    }
}

void Function_Return_Sample()
{
    int      lenght  = 5; // size of the array
    double numbers[] = {12.0, 22.0, 54.7, 43.99, 56.1}; // Array of double
    double    result = 0.0;
    
    result = Function_Average_Sample(numbers, lenght);
    
    cout << "Average: " << result << "\n";
    
}

double Function_Average_Sample(double numbers[], int lenght)
{
    double sum = 0.0;
    for (int i = 0; i < lenght; i++) {
        sum += numbers[i];
    }
    
    return (sum / lenght);
}

void Function_Overloading_Sample()
{
    long a_long = 2;
    long b_long = 8;
    double a_double = 3.3;
    double b_double = 1.9;
    
    cout << "MULTI-LONG: "   << multi(a_long, b_long) << "\n";
    cout << "MULTI-DOUBLE: " << multi(a_double, b_double) << "\n";
}

long multi(long a, long b)
{
    return a * b;
}

double multi(double a, double b)
{
    return a * b;
}
