#include <cstdlib>
#include "dice.h"

    Dice::Dice(int side){
        this->sides = sides;
        this->num = 0;
    }

    int Dice::roll(){
        this->num = rand() % sides + 1;
        return this->num;
    }
     
