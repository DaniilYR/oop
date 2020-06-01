#ifndef NEGATIVECARD_H
#define NEGATIVECARD_H

#include "neutralobkect.h"

class NegativeCard : public Neutral
{
private:
    std::string name_minus;
public:
    NegativeCard(){}
    std::string name() override{
        name_minus = "negative_card";

    }
    void operator -(Unit* unit){
        unit->health -= 10;
        unit->armor -= 10;
        unit->attack -=10;
    }

};

#endif // NEGATIVECARD_H
