// Written by James Mok and Niel Koride

#include "Square-KorideMok.hpp"
#include <iostream>

//A single function-test consists of a print statement that says what is being tested and what the output should be.  Following that is the call on the function being tested.  Last is call on print() to display the results.

void PrintTestCase(Square* test){
    std::cout << "~Before~" << std::endl;
    test->Print();
    std::cout << "!Mark!" << std::endl;
    test->Mark('1');
    std::cout << "~After~" << std::endl;
    test->Print();
}

void TestSquareFunctions(){
    std::cout << "Testing the Square class from Square-KorideMok.hpp" << std::endl;
    std::cout << "Expected Output:" << std::endl;
    std::cout << "1. Null values" << std::endl;
    std::cout << "2. Empty markable square" << std::endl;
    std::cout << "3. Numbered unmarkable square" << std::endl;
    std::cout << "4. Unmarked square with limited possibilities\n" << std::endl;


    std::cout << "1. Null Value Test" << std::endl;
    Square* objOne = new Square();
    PrintTestCase(objOne);
    objOne->~Square();
    std::cout << std::endl;

    std::cout << "2. Empty Square Test" << std::endl;
    Square* objTwo = new Square('-');
    PrintTestCase(objTwo);
    objTwo->~Square();
    std::cout << std::endl;

    std::cout << "3. Fixed Square Test" << std::endl;
    Square* objThree = new Square('9');
    PrintTestCase(objThree);
    objThree->~Square();
    std::cout << std::endl;

    std::cout << "4. Limited Possibilities Test" << std::endl;
    Square* objFour = new Square('~');
    PrintTestCase(objFour);
    objFour->~Square();
    std::cout << std::endl;
}