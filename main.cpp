#include <iostream>
#include <vector>
#include "Nightingale.h"
#include "Sparrow.h"

//Ticket5;


void testBirds(){
    Nightingale nightingale("soooooong");
//    nightingale.sing();
    Sparrow sparrow("soooooong");
//    sparrow.sing();
//
//    std::cout<<"polimo"<<std::endl;
    std::vector<Bird*> birds;
    birds.push_back(&sparrow);
    birds.push_back(&nightingale);
    for(int i = 0; i < birds.size(); i++){
        (*birds[i]).sing();
    }
}

int main() {
//    testPair(getPair());
    testBirds();
    return 0;
}
