#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Number
{
public:
    int computerNum, guessedNum;
    void pickNum(void);
};
void Number ::pickNum(void)
{
    srand(time(0));
    computerNum = rand() % 100 + 1;
}
int main()
{
    Number n1;
    n1.pickNum();
    cout << "Computer has chosen its number from 1 to 100" << endl;
    cout << "You got only 10 attempts." << endl;
    cout << "Guess your number now - " << endl;
    cin >> n1.guessedNum;
    for (int i = 0; ((n1.guessedNum != n1.computerNum) && (i < 9)); i++)
    {
        if (n1.guessedNum > n1.computerNum)
        {
            cout << "Too high" << endl;
            cin >> n1.guessedNum;
        }
        else
        {
            cout << "Too low" << endl;
            cin >> n1.guessedNum;
        }
    }
    if (n1.guessedNum == n1.computerNum)
    {
        cout << "You guessed it right !" << endl;
        cout << n1.computerNum << " is the correct number" << endl;
    }
    else
    {
        cout << "Game over !" << endl;
        cout << n1.computerNum << " is the correct number" << endl;
    }
    return 0;
}