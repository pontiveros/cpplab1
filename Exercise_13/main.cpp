//
//  main.cpp
//  Exercise_13
//
//  Created by Pedro Ontiveros on 03/09/22.
//

///////////////////////////////////////////////////////////////////////////////////
// compile release: clang++ -Wall -std=c++11 source1... -o out.file              //
// compile debug: clang++ -Wall -std=c++11 -g main.cpp source_01.cpp -o out.file //
// debugger: lldb {prog.debug (program name)}                                    //
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>

void testWriteToFile()
{
    std::ofstream myFile;

    myFile.open("my_text.txt");
    
    for (int i = 0; i < 10000; i++) {
        for (int a = 0 ; a < 10; a++) {
            myFile << (i + a) << " ";
        }
        myFile << "\n";
    }

    myFile.close();
}

void testReadFromFile() 
{
    char cursor = 0; 
    std::ifstream myFile;

    myFile.open("my_text.txt");
    
    while (myFile) {
        cursor = myFile.get();
        std::cout << cursor;
    }

    myFile.close();
}

int main() 
{
    testWriteToFile();
    testReadFromFile();
    std::cout << "End of program!\n";
    return 0;
}