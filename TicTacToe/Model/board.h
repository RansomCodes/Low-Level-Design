#ifndef BOARD_H
#define BOARD_H

#include <bits/stdc++.h>
#include "playingPiece.h"
using namespace std;

class Board{
    public:
    int size;
    vector<vector<PlayingPiece>> board;

    Board(int size)
    {
        this->size=size;
        board.resize(size,vector<PlayingPiece>(size));
    }

    void PrintBoard()
    {
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                if(board[i][j].p == PieceType::EMPTY) cout<<" ";
                else cout<<((board[i][j].p == PieceType::X)? 'X':'O');
                if(j!=size-1) cout<<" | "; 
            }
            cout<<endl;
        }
    }

    vector<pair<int,int>> GetFreeSpace()
    {
        vector<pair<int,int>> free;
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                if(board[i][j].p==PieceType::EMPTY) free.push_back({i,j});
            }
        }
        return free;
    }

    bool placeCell(int r,int c,PlayingPiece* p)
    {
        if(r<0 or r>=size or c<0 or c>=size or board[r][c].p!=PieceType::EMPTY) return 0;
        board[r][c]=*p;
        return 1;
    }

    bool GameOver()
    {
        for(int i=0;i<size;i++)
        {
            PieceType curr=board[i][0].p;
            if(curr==PieceType::EMPTY) continue;
            bool same=1;
            for(int j=1;j<size;j++)
            {
                if(curr!=board[i][j].p)
                {
                    same=0;
                    break;
                }
            }
            if(same) return 1;
        }

        for(int j=0;j<size;j++)
        {
            PieceType curr=board[0][j].p;
            if(curr==PieceType::EMPTY) continue;
            bool same=1;
            for(int i=1;i<size;i++)
            {
                if(curr!=board[i][j].p)
                {
                    same=0;
                    break;
                }
            }
            if(same) return 1;
        }

        bool same=0;
        PieceType curr=board[0][0].p;
        if(curr!=PieceType::EMPTY)
        {
            same=1;
            for(int i=1;i<size;i++)
            {
                if(board[i][i].p!=curr)
                {
                    same=0;
                    break;
                }
            }
        }
        if(same) return 1;

        same=0;
        curr=board[0][size-1].p;
        if(curr!=PieceType::EMPTY)
        {
            same=1;
            for(int i=1;i<size;i++)
            {
                if(board[i][size-i-1].p!=curr)
                {
                    same=0;
                    break;
                }
            }
        }
        if(same) return 1;
        return 0;
    }

};
#endif