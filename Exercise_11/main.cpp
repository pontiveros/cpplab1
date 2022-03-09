//
//  main.cpp
//  Exercise_11
//
//  Created by Pedro Ontiveros on 03/05/22.
//

///////////////////////////////////////////////////////////////////////////////////
// compile release: clang++ -Wall -std=c++11 source1... -o out.file              //
// compile debug: clang++ -Wall -std=c++11 -g main.cpp source_01.cpp -o out.file //
// debugger: lldb {prog.debug (program name)}                                    //
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "TEntity.h"

void test_01()
{
    int input = 0;
    std::cout << "Insert Integer: ";
    std::cin >> input;

    try { 
        TEntity e(input);
        std::cout << "Reduce: "<< e.Reduce(25) << "\n";
    } catch (const char *err) {
        std::cout << "************ ERROR: " << err << " ************" << std::endl;
    } catch (...) {
        std::cout << "************ This is a generic error ************\n";
    }
}  

int main(int argc, const char * argv[]) 
{
    test_01();
    std::cout << "End of program!\n";
    return 0;
}
