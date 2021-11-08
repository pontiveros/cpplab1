//
//  Exercise_01.cpp
//  CPPLab1
//
//  Created by Pedro Ontiveros on 10/28/21.
//

#include "Exercise_01.hpp"

using namespace std;


#define MAX_VALUE_ALLOWED 9
#define SIZE_INT_ARRAY    5

void DataTypes_Sample()
{
    /*
    This excersice show how many different data types are in C++ and how to use the operator sizeof
    */
    
    char _charValue = 'A';

    short           _shortValue  = -1;
    int             _intValue    = -2;
    long            _longValue   = -3;
    
    unsigned short  _uShortValue = 1;
    unsigned int    _uIntValue   = 2;
    unsigned long   _uLongValue  = 3;
    
    // Float point types
    float       _floatValue   = 1.1;
    double      _doubleValue  = 2.2987879879809808;
    long double _lDoubleValue = 3.3;
    
    cout << "size of char: "      << sizeof(char)       << " \tvalue: " << _charValue   << "\n";
    cout << "size of short: "     << sizeof(short)      << " \tvalue: " << _shortValue  << "\n";
    cout << "size of int: "       << sizeof(int)        << "  \tvalue: " << _intValue    << "\n";
    cout << "size of long: "      << sizeof(long)       << " \tvalue: " << _longValue   << "\n\n";
    
    cout << "size of unsigned short: " << sizeof(unsigned short) << " \tvalue: " << _uShortValue << "\n";
    cout << "size of unsigned int: "   << sizeof(unsigned int)   << " \tvalue: " << _uIntValue   << "\n";
    cout << "size of insigned long: "  << sizeof(unsigned long)  << " \tvalue: " << _uLongValue  << "\n\n";
    
    cout << "size of float: "       << sizeof(float)       << " \tvalue: " << _floatValue   << "\n";
    cout << "size of double: "      << sizeof(double)      << " \tvalue: " << _doubleValue  << "\n";
    cout << "size of long double: " << sizeof(long double) << " \tvalue: " << _lDoubleValue << "\n\n";
    
    cout << "size of pointer to short: "  << sizeof(short*)   << "\n";
    cout << "size of pointer to char: "   << sizeof(char*)    << "\n";
    cout << "size of pointer to int: "    << sizeof(int*)     << "\n";
    cout << "size of pointer to long: "   << sizeof(long*)    << "\n";
    cout << "size of pointer to float: "  << sizeof(float*)   << "\n";
    cout << "size of pointer to double: " << sizeof(double*)  << "\n";
}

void ControlFlow_Sample()
{
    int value = 0;
    
    cout << "Enter a number between 0 - 9: ";
    cin >> value;
    
    if (value > 5) {
        cout << "The value is higher than 5\n";
    } else {
        cout << "The value is equal or less than 5\n";
    }
    
    switch (value) {
        case 0: cout << "The value is exactly equal to 0\n"; break;
        case 1: cout << "The value is exactly equal to 1\n"; break;
        case 2: cout << "The value is exactly equal to 2\n"; break;
        case 3: cout << "The value is exactly equal to 3\n"; break;
        case 4: cout << "The value is exactly equal to 4\n"; break;
        case 5: cout << "The value is exactly equal to 5\n"; break;
        case 6: cout << "The value is exactly equal to 6\n"; break;
        case 7: cout << "The value is exactly equal to 7\n"; break;
        case 8: cout << "The value is exactly equal to 8\n"; break;
        case 9: cout << "The value is exactly equal to 9\n"; break;
        default: cout << "The value is out of range\n";
    }
    
    for (int i = 0; i < value; i++) {
        cout << "Line number " << (i + 1) << "\n";
        
        if (i >= MAX_VALUE_ALLOWED) {
            cout << "The value is too large to continue... stopped.\n";
            break;
        }
    }
}

void Print_ArrayInt_Sample(int array[], int size)
{
    for (int index = 0; index < size; index++) {
        cout << array[index];
        
        if ((index + 1) < size) {
            cout << " - ";
        }
    }
    
    cout << endl;
}

void Array_Sample()
{
    int input = 0;
    int v1[]  = {2, 3, 8, 1, 6, 4, 5, -1};  // Array of integers
    int v2[SIZE_INT_ARRAY];
    char message[] = "Hello world!";        // Array of chars (C string)
    
    cout << v1 << "\n";
    cout << message << "\n";
    
    for (int i = 0; i < 12; i++) {
        cout << message[i] << "\n";
    }
    
    for (int index = 0; index < SIZE_INT_ARRAY; index++) {
        cout << "Insert an Integer: ";
        cin >> input;
        v2[index] = input;
    }
    
    Print_ArrayInt_Sample(v2, SIZE_INT_ARRAY);
}
