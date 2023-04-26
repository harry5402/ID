//
//  ID.cpp
//  IDdriver.cpp
//
//  Created by Harry Lesak on 4/26/23.
//

#include "ID.hpp"
#include <iostream>
using namespace std;

ID::ID()
{
    static int currentNumber = 10000000;
    ID_number = currentNumber;
    currentNumber++;
    full_ID = 'A' + to_string(ID_number);
}

string ID::getID()
{
    return full_ID;
}
