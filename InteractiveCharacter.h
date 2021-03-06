//
// Created by User on 25/06/2017.
//

#ifndef DIVERTPROJECT_INTERACTIVECHARACTER_H
#define DIVERTPROJECT_INTERACTIVECHARACTER_H


#include "Interactive.h"
#include <string>

class InteractiveCharacter : public Interactive {
public:
    InteractiveCharacter(int x, int y, std::string n) : Interactive(x, y), name(n) {};

    const std::string &getName() const;

    void setName(const std::string &name);

protected:
    std::string name;
};


#endif //DIVERTPROJECT_INTERACTIVECHARACTER_H
