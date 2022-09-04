//
// Created by James Mok on 9/3/2022.
//

#include "Square-KorideMok.hpp"
#include <iostream>

// state
// set of relationships to other squares

//TODO create unit tests (especially for print) and make sure syntax is correct

Square::Square(){
    std::cout << "Default Constructor" << std::endl;
    value = '\0';
    fixed = false;
    possibilities = 0;
}

Square::Square(char startingValue){
    value = startingValue;
    if (startingValue == '-'){
        possibilities = 0x3FE;
        fixed = false;
    }
    else if (startingValue == '~'){
        possibilities = 0x0f2;
        fixed = false;
        value = '-';
    }
    else{
        possibilities = 0x000;
        fixed = true;
    }
}

Square::~Square(){
    std::cout << "Default Destructor" << std::endl;
}

void Square::Mark(char ch){
    if (!this->fixed){
        value = ch;
    }
    else{
        std::cout << "Cannot Add Value" << std::endl;
    }
}

void Square::Print(){
    std::cout << "value: " << value << std::endl;
    std::cout << "fixed: " << std::boolalpha <<fixed << std::endl;
    std::cout << "possiblities: ";

    short temp = possibilities >> 1;
    short mask = 0x001;
    short counter = 1;
    while (temp > 0){
        if ((temp & mask) == 1){
            std::cout << counter;
        }
        else{
            std::cout << '-';
        }

        temp = temp >> 1;
        counter++;
    }
    std::cout << std::endl;
}