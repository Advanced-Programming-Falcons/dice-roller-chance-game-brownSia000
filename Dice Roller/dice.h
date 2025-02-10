#ifndef DICE_H
#define DICE_H

class Dice{
    public:
        Dice(int sides);
        int roll();
    private:
        int sides;
        int num;
};
#endif