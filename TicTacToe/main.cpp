#include<bits/stdc++.h>
#include "Game.h"

using namespace std;

int main()
{
    Game* game=new Game();
    game->startGame();
    delete game;
}