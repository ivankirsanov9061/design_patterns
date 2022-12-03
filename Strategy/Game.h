#pragma once

#include "Right.h"
#include "Left.h"

#include <memory>

class Game
{
private:
    std::shared_ptr<IMove> action;

public:
    void SetAction(std::shared_ptr<IMove> action)
    {
        this->action = std::move(action);
    }

    void ExecuteAction()
    {
        action->Move();
    }
};
