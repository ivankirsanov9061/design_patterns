#pragma once

#include "IMove.h"

#include <iostream>

class Right : public IMove
{
public:
    void Move()
    {
        std::cout << "Right" << std::endl;
    }
};
