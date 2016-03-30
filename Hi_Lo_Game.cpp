/**
    Hi_Lo_Game.cpp
    Purpose: practice data structure and algorithm implementation

    @author MA Saleh
    comment: followed from learncpp.com
*/

#include<iostream>
#include<ctime>                                                                     //for taking system time time()
#include<random>                                                                    //for srand() and rand()

using namespace std;
const int guesses = 7;

int getRandomNumber(int min, int max);                                              //to generate a random number between min and max (inclusively)
bool playGame(int guesses, int number)  ;                                            //return true if the user won otherwise false
bool playAgian() ;                                                                   // keep asiking the user untill they pick y or n
void gameEngine();                                                                   //call other functions from this fucntion and navigate and take user opinion




int main()                                                                          /**main function started*/
{
    srand(static_cast<unsigned int>(time(0)));                                      //set system clock as a initial seed value

    rand();

    gameEngine();


    cout << "Thank you for playing\n";

    return 0;
}                                                                                       /**end of main*/




int getRandomNumber(int min, int max)                                               //to generate a random number between min and max (inclusively)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);

    return static_cast<int>(rand() * fraction * (max - min +1) + min);              // calculate the random number within our range
}


bool playGame(int guesses, int number)                                              //return true if the user won otherwise false
{
    for(int count =0; count < guesses; ++count)
    {
        cout << "Guess #" << count << ": ";
        int guess;
        cin >> guess;

        if(guess < number) cout << "Your guess is too low\n";
        else if(guess > number) cout << "Your guess is too high\n";
        else return true;                                                           //return true if guess==number
    }
    return false;
}



bool playAgian()                                                                    // keep asiking the user untill they pick y or n
{
    char ch;
    do
    {
        cout << "Would you like to play again? (y/n) ";
        cin >> ch;
    }while(ch != 'y' && ch != 'n');

    return (ch == 'y');
}


void gameEngine()
{
    do                                                                              //while the user still wants to play
    {
        int number = getRandomNumber(1, 100);                                       //take a random number which is user have to guess

        cout << "Lets play a game. I am thinking of a number. you have " << guesses << " tries to guess what it is.\n";

        bool won = playGame(guesses, number);
        if(won) cout << "Correct You win.\n";
        else cout << "Sorry! you loose. the correct number was " << number << "\n";
    } while(playAgian());

}

/**end of the program*/
