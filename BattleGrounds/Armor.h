#ifndef ARMOR_H
#define ARMOR_H

template<typename T>

class Armor{
private:
    T helmet = 1;
    T chest = 1;
    T boots = 1;
    T gloves = 1;
public:
    T def = helmet + chest + boots + gloves;
};


#endif /* ARMOR_H */

