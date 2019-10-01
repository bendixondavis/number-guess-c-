#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//this is a simple program that asks users to guess a secret number from 1-100
//at each guess it gives a clue as to if the secret number is higher or lower
//when the user guesses correctly, program displays number of total guesses and asks if user wants to play again

int main()
{

    char playAgain;     //initialize variable used to see if user wants to play again
    srand(time(NULL)); //initialize random seed

    do
    {

         /* Initialize variables */
        int guess=0;
        int secret=0;
        int x=0;

        cout << "Can you guess my number?" << endl;

        secret=rand() % 100+1;      //picks a random number from 1-100

        do
        {
            cout << "Guess a number from 1-100:"  << endl;
            cin >> guess;       //gets the user's guess

            //checks to see if the guess is the correct number
            if (guess < secret)
                cout <<  "The secret number is higher." << endl;
            else if(guess > secret )
                cout << "The secret number is lower."  << endl;

            x=x+1;  //counts how many guesses have been made
        }while (guess!=secret);

        cout << "You guessed it!  It took you " << x << " guesses." << endl;
        cout << "Would you like to play again? (y / n)" << endl;
        cin >> playAgain;

    }while(playAgain=='y');

    return 0;
}
