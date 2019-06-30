#pragma once 

#include "Board.hpp"
#include <memory>
#include <iostream>

namespace fatanyu
{
    class Game
    {
    protected:
        Board *m_board;

        BoardSize giveMeBoardSizes();

        BoardSize askForBoardSize();

    public:
        /**
         *
         */
        void startGame();

        Game();

        ~Game();
    };
}