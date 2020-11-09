#ifndef MODONE_BIRD_H
#define MODONE_BIRD_H
#include <string>

class Bird {

protected:
    std::string song;
public:
    Bird(std::string song){
        this->song = song;
    }

    virtual void sing() = 0;

};


#endif //MODONE_BIRD_H
