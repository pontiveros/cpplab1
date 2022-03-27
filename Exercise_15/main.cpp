//
//  main.cpp
//  Exercise_15
//
//  Created by Pedro Ontiveros on 03/09/22.
//

///////////////////////////////////////////////////////////////////////////////////
// compile release: clang++ -Wall -std=c++11 source1... -o out.file              //
// compile debug: clang++ -Wall -std=c++11 -g main.cpp source_01.cpp -o out.file //
// debugger: lldb {prog.debug (program name)}                                    //
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <stack>
#include <regex>



void fnVectorSample() 
{
    std::vector<int> items;

    items.push_back(4);
    items.push_back(24);
    items.push_back(87);
    items.push_back(91);
    items.push_back(12);

    for (auto a = items.begin(); a != items.end(); ++a) {
        std::cout << *a << "\n";
    }

}

void fnStackSample() 
{
    std::stack<int> stack;
    stack.push(312);
    stack.push(847);
    stack.push(553);
    stack.push(102);
    stack.push(736);

    while (!stack.empty()) {
        std::cout << stack.top() << "\n";
        stack.pop();
    }
}

void fnStringReplaceSample()
{
    std::string str1 = "This is a message from Pedro Ontiveros.";
    std::cout << str1 << "\n";

    try {
        str1 = std::regex_replace(str1, std::regex("Pedro"), "Florencia");
    } catch (...) {
        std::cout << "There is an error\n";
    }
    
    std::cout << str1 << std::endl;
}

int getMenuOption() 
{
    int option = 0;

    do {
        std::cout << "\n\n\n\n\n***** MENU *****\n";
        std::cout << "1. Vector Sample\n";
        std::cout << "2. Stack Sample\n";
        std::cout << "3. String Replace Sample\n";
        std::cout << "4. vector Sample\n";
        std::cout << "0. Quit\n";
        std::cin >> option;
    } while ( option < 0 || option > 4);
    
    return option;
}

void runSample(int menuOption) 
{
    switch (menuOption) {
        case 0: std::cout << "Exit\n";   break;
        case 1: fnVectorSample();        break;
        case 2: fnStackSample();         break;
        case 3: fnStringReplaceSample(); break;
        default:  std::cout << "Invalid Option!\n";  break;
    }
}

int main() 
{
    runSample(getMenuOption());
    std::cout << "End of program!\n";
    return 0;
}
