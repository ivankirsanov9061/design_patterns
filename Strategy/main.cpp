#pragma once

#include "Game.h"
#include "Right.h"
#include "Left.h"

#include <memory>

int main()
{
    Game game;

    game.SetAction(std::make_shared<Right>());
    game.ExecuteAction();

    game.SetAction(std::make_shared<Left>());
    game.ExecuteAction();
}
