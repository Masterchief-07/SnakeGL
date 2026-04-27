#pragma once
/*
    handle all game logique 
*/

class Game
{
    public:
    Game();
    ~Game();

    //singleton, no copy, no move
    Game(const Game&) = delete;
    Game(Game&&) = delete;
    Game& operator=(Game&&) = delete;
    Game& operator=(const Game&) = delete;

    private:

};