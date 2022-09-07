// P1-Square Written by James Mok and Niel Koride

#ifndef P1_MOK_SQUARE_KORIDEMOK_H
#define P1_MOK_SQUARE_KORIDEMOK_H

class Square {
    private:
        short possibilities = 0x3FE;
        char value = '-';
        bool fixed = false; //is object part of the original puzzle?

    public:
        Square();
        Square(char);
        ~Square();
        void Mark(char);
        void Print();
};

#endif P1_MOK_SQUARE_KORIDEMOK_H