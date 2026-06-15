#include"ClassRandom/Random.hpp"

void Random::getRandomNumber()
{
    srand(time(0));
    int n{};
    for ( int i = 0 ; i < 4 ; i++)
        for ( int j = 0 ; j < 4 ; j++)
        {
            n = rand() % 16;
            this->board[i][j] = n ;
        }
            
        return;
}   