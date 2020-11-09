#ifndef MODONE_NIGHTINGALE_H
#define MODONE_NIGHTINGALE_H
#include "Bird.h"
#include <string>
#include <iostream>
class Nightingale : public Bird{

public:
    Nightingale(std::string song) : Bird(song) {

    }

    void sing() override;
};


#endif //MODONE_NIGHTINGALE_H
