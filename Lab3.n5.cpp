#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand (time(0));
    int r=1+rand()%100;
    string guess;
    cout << "Guess whether the number is 'even' or 'odd':";
    cin>> guess;


    if (r%2==0 && guess =="even"){
            cout <<"you won";
    }
    else if (r%2!=0 && guess== "odd") {
            cout << "You won!";
    }
    else {
            cout << "You lost";
    }
   return 0;
}
