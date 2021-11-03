//
//  Exercise_04.cpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/2/21.
//

#include "Exercise_04.hpp"


void Pointer_Base_Concept()
{
    long  v1 = 2021;
    long  v2 = 100;
    long *p2 = &v2;
    
    printf("Value of v1: %ld\n", v1);
    printf("Address of v1: %p\n\n", &v1);
    
    printf("Value of v2: %ld\n", v2);
    printf("Address of v2: %p\n", &v2);
    
    printf("Value of p2: %p\n", p2);
    printf("Content of v2 via p2: %ld\n", *p2);
    printf("Address of p2: %p\n\n", &p2);
    
    *p2 = 200;
    
    printf("Value of v2: %ld\n", v2);
    printf("Address of v2: %p\n", &v2);
    
    printf("Value of p2: %p\n", p2);
    printf("Content of v2 via p2: %ld\n", *p2);
    printf("Address of p2: %p\n\n", &p2);
}
