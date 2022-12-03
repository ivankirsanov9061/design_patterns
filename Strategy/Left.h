#pragma once

#include "IMove.h"

#include <iostream>

class Left : public IMove
{
public:
    void Move()
    {
        std::cout << "Left" << std::endl;
    }
};
