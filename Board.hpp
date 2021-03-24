#include "Direction.hpp"
#include <iostream>
#include <string>
using namespace std;
namespace ariel 
{
    class Board
    {
    private:
        /* data */
    public:
        void post(unsigned int row, unsigned int colum , Direction d, string s); 
        string read(unsigned int row , unsigned int colum, Direction d ,unsigned int length);
        void show();
        Board(/* args */);
        ~Board();
    };
    
}