//
//  ID.hpp
//  IDdriver.cpp
//
//  Created by Harry Lesak on 4/26/23.
//

#ifndef ID_hpp
#define ID_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class ID
{
public:
    ID();
    string getID();
    
private:
    string full_ID;
    int ID_number;
};




#endif /* ID_hpp */
