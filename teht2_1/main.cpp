#include <iostream>

using namespace std;

class Game{
public:
    Game(int);
    ~Game(){};
    void play();
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

    void printGameResult();
};

Game::Game(int newMaxNumber){
    maxNumber = newMaxNumber;
    cout << "Initialized with " << maxNumber << " as maximium number." << endl;
};
void Game::play(){
    bool loopState = true;
    srand(10);
    randomNumber = rand() % maxNumber+1;
    while(loopState){
        cout << "Guess a number between 1-" << maxNumber << endl;
        cin >> playerGuess;
        if(playerGuess < randomNumber){
            cout << "Number is higher." << endl;
            numOfGuesses++;
        }
        else if(playerGuess > randomNumber){
            cout << "\n Number is lower." << endl;
            numOfGuesses++;
        }
        else{
            cout << "Correct." << endl;
            loopState = false;
        }
    }
};
int main()
{
    Game gameObject(10);
    gameObject.play();
    return 0;
}
