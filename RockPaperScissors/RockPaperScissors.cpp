

#include <iostream>
#include <random>
using namespace std;



int getUserChoice();

int getCompChoice();

void showResult(int user, int comp);

 int main()
{
    int user;
    int comp;
    string play = "y";
    while (play == "y" || play == "Y")
    {
        user = getUserChoice();
        if (user == 3)
        {
            return 1;
        }
        comp = getCompChoice();
        showResult(user, comp);
        cout << "play again? type 'y'." << endl;
        cin >> play; 
    }
   

}

int getUserChoice()
{
    string choice;
    int value;
    cout << "welcome to the game. rock, paper, or scissors?" << endl << "type 'quit' to end the program" << endl;
    cin >> choice; 
    value = 4;
    while (value == 4)
    {
        if (choice == "rock" || choice == "rock")
        {
            value = 0;
            return value;
        }
        else if (choice == "paper" || choice == "Paper")
        {
            value = 1;
            return value;
        }
        else if (choice == "scissors" || choice == "Scissors")
        {
            value = 2;
            return value;
        }
        else if (choice == "quit" || choice == "Quit")
        {
            return 3;
        }
        else
        {
            cout << endl << "invalid choice.";
            value = 4;
            return value;
        }
     }
    
}

int getCompChoice()
{
    srand(time(0));
    return rand() % 3;
}

void showResult(int user, int comp)
{    
    
    if (user == 0 and comp == 0)
    {
        cout << "tie! rock vs rock." << endl;
    }
    else if (user == 0 and comp == 1)
    {
        cout << "lose! rock vs paper." << endl;
    }
    else if (user == 0 and comp == 2)
    {
        cout << "win! rock vs scissors." << endl;
    }
    else if (user == 1 and comp == 0)
    {
        cout << "win! paper vs rock." << endl;
    }
    else if (user == 1 and comp == 1)
    {
        cout << "tie! paper vs paper." << endl;
    }
    else if (user == 1 and comp == 2)
    {
        cout << "lose! paper vs scissors." << endl;
    }
    else if (user == 2 and comp == 0)
    {
        cout << "lose! scissors vs rock." << endl;
    }
    else if (user == 2 and comp == 1)
    {
        cout << "win! scissors vs paper." << endl;
    }
    else if (user == 2 and comp == 2)
    {
        cout << "tie! scissors vs scissors." << endl;
    }
}