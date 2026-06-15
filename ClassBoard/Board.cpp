#include"Board.hpp"

Board::Board()
{
    for ( int i = 0 ; i < 4 ; i++)
        for ( int j = 0 ; j < 4 ; j++)
        {
            this->board[i][j] = 0 ;
        }
}

void Board::setBoard( int tab[4][4] )
{
    for ( int i = 0 ; i < 4 ; i++)
        for ( int j = 0 ; j < 4 ; j++)
        {
            this->board[i][j] = tab[i][j] ;
        }
          
}