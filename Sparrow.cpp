//
// Created by владислав on 09.11.2020.
//

#include "Sparrow.h"

void Sparrow::sing() {
    std::string out = Bird::song.substr(0, 3);
    std::cout << out << std::endl;

}
