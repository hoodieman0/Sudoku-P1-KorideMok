//
// Created by hoodi on 9/3/2022.
//

#include "Square-KorideMok.h"
#include <iostream>

void PrintTestCase(Square* test){
    std::cout << "~Before~" << std::endl;
    test->Print();
    std::cout << "!Mark!" << std::endl;
    test->Mark('1');
    std::cout << "~After~" << std::endl;
    test->Print();
}

void TestSquareFunctions(){
    std::cout << "Default Test" << std::endl;
    Square* objOne = new Square();
    PrintTestCase(objOne);
    objOne->~Square();
    std::cout << std::endl;

    std::cout << "Empty Square Test" << std::endl;
    Square* objTwo = new Square('-');
    PrintTestCase(objTwo);
    objTwo->~Square();
    std::cout << std::endl;

    std::cout << "Fixed Square Test" <<std::endl;
    Square* objThree = new Square('9');
    PrintTestCase(objThree);
    objThree->~Square();
    std::cout << std::endl;

    std::cout << "Varied Possibilities Test" << std::endl;
    Square* objFour = new Square('~');  //TODO testing character
    PrintTestCase(objFour);
    objFour->~Square();
    std::cout << std::endl;


}