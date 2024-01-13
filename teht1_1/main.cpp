#include <iostream>
#include <limits>
using namespace std;

int game(int maxNum);

int main()
{
    int numOfGuess = 0;
    numOfGuess = game(20);
    cout << "Number of guesses: " << numOfGuess << endl;
    return 0;
}

int game(int maxNum){

    int randomNumber = 0;
    int playerGuess = 0;
    int guesses = 0;
    bool loopState = true;
    srand(10);
    randomNumber = rand() % maxNum+1;
    while(loopState){
        cout << "Guess a number:" << endl;
        //cin.ignore();
        cin >> playerGuess;
        if(playerGuess < randomNumber){
            cout << "Number is higher." << endl;
            guesses++;
        }
        else if(playerGuess > randomNumber){
            cout << "\n Number is lower." << endl;
            guesses++;
        }
        else{
            cout << "Correct." << endl;
            loopState = false;
        }
    }
    return guesses;
}
