#ifndef MODONE_SPARROW_H
#define MODONE_SPARROW_H
#include "Bird.h"
#include <string>
#include <iostream>
class Sparrow:Bird {

public:
    Sparrow(std::string song) : Bird(song){

    }

    void sing() override;
};


#endif //MODONE_SPARROW_H
