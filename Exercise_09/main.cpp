//
//  main.cpp
//  Exercise_08
//
//  Created by Pedro Ontiveros on 02/27/22.
//

///////////////////////////////////////////////////////////////////////////////////
// compile release: clang++ -Wall -std=c++11 source1... -o out.file              //
// compile debug: clang++ -Wall -std=c++11 -g main.cpp source_01.cpp -o out.file //
// debugger: lldb {prog.debug (program name)}                                    //
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "template_01.h"

#define MAX_ARR_FLOAT 1000

void testSimpleTemplate()
{
    int   r1 = sum(4, 5);
    float r2 = sum(8.2, 3.2);

    std::cout << "Sum 4 + 5 = " << r1 << "\n";
    std::cout << "Sum 8.2 + 3.2 = " << r2 << "\n";
}

void testSort_1() 
{
    int arr[] = {8, 19, 54, 1, 23, 5, 45, 12, 7, 99};
    int nSize = 10;

    std::cout << "unsorted array: \n";
    for (int i = 0; i < nSize; i++) {
        std::cout << arr[i] << " \n";
    }

    mySort(arr, nSize);

    std::cout << "sorted array: \n";
    for (int i = 0; i < nSize; i++) {
        std::cout << arr[i] << " \n";
    }
}

void testSort_2()
{
    float arr[] = {1.8, 0.19, 5.4, 1.1, 2.3, 5.4, 45.9, 12.02, 7.1, 99.1};
    int nSize = 10;

    std::cout << "unsorted array: \n";
    for (int i = 0; i < nSize; i++) {
        std::cout << arr[i] << " \n";
    }

    mySort(arr, nSize);

    std::cout << "sorted array: \n";
    for (int i = 0; i < nSize; i++) {
        std::cout << arr[i] << " \n";
    }
} 

void testSort_3() 
{
    float arr[MAX_ARR_FLOAT]; 

    for (int i = 0; i < MAX_ARR_FLOAT; i++) {
        arr[i] = (float)rand() / 100.0;
    }
    printArray(arr, MAX_ARR_FLOAT);
    mySort(arr, MAX_ARR_FLOAT);
    printArray(arr, MAX_ARR_FLOAT);
 }

int main(int argc, const char * argv[]) {
    
    testSort_3();

    std::cout << "End of program!\n";
    return 0;
}
