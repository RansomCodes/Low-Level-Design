#ifndef PLAYING_GAME_H
#define PLAYING_GAME_H

#include "./Model/player.h"
#include "./Model/board.h"
#include "./Model/playingPieceX.h"
#include "./Model/playingPieceO.h"
#include<bits/stdc++.h>

using namespace std;

class Game{
    public:
    list<Player*> players;
    Board* gameboard;

    Game()
    {
        initializeGame();
    }

    void initializeGame()
    {
        PlayingPieceX* cross=new PlayingPieceX();
        PlayingPieceO* notPiece=new PlayingPieceO();

        Player* p1=new Player("player1",cross);
        Player* p2=new Player("player2",notPiece);

        players.push_back(p1);
        players.push_back(p2);

        gameboard =new Board(3);
    }

    void startGame(){
        bool winner=false;
        while(!winner)
        {
            Player* p_turn=players.front();

            gameboard->PrintBoard();
            vector<pair<int,int>> freeCells=gameboard->GetFreeSpace();
            if(freeCells.empty())
            {
                cout<<"Tie\n";
                break;
            }

            cout<<"Player Turn "<<p_turn->name<<" Enter row,column: ";
            int r,c; cin>>r>>c;
            cout<<endl;
            bool placed=gameboard->placeCell(r,c,p_turn->playingpiece);
            if(!placed)
            {
                cout<<"Please Enter a valid piece which is Empty\n";
                continue;
            }

            bool gameDone=gameboard->GameOver();
            if(gameDone)
            {
                cout<<p_turn->name<<" is the winner of the game\n";
                winner=true;
            }
            players.pop_front();
            players.push_back(p_turn);
        }
    }

};

#endif