#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int card = rand() % 52;

    string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    string suits[] = {"Clubs", "Diamonds", "Hearts", "Spades"};

    string rank = ranks[card % 13];
    string suit = suits[card / 13];

    cout << "You picked: " << rank << " of " << suit;

    return 0;
}
