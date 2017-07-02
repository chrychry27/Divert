//
// Created by User on 24/06/2017.
//

#ifndef DIVERTPROJECT_WEAPON_H
#define DIVERTPROJECT_WEAPON_H


#include "BuyableItems.h"

class Weapon: public BuyableItems {
public:
    int getDamage() const;

    void setDamage(int damage);

    int getRate() const;

    void setRate(int rate);

    int getIntegrity() const;

    void setIntegrity(int integrity);

    int getNumberOfHits() const;

    void setNumberOfHits(int numberOfHits);

    bool isMagical() const;

    void setMagical(bool magical);

protected:
    virtual int damage;
    virtual int rate;
    virtual int integrity;
    virtual int numberOfHits;
    virtual bool magical;
};


#endif //DIVERTPROJECT_WEAPON_H