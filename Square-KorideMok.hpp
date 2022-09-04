//
// Created by hoodi on 9/3/2022.
//

#ifndef P1_MOK_SQUARE_MOKPLACE_H
#define P1_MOK_SQUARE_MOKPLACE_H

class Square {
    private:
        short possibilities;
        char value;
        bool fixed; //is part of the original puzzle
        //why is the order important?

    public:
        Square();
        Square(char);
        ~Square();
        void Mark(char);
        void Print();
};

#endif //P1_MOK_SQUARE_MOKPLACE_H