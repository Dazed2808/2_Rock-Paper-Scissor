#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    char user_choice, comp_choice;
    srand(time(0));
    do
    {
        cout << "Enter your choice (R for Rock, P for Paper, S for Scissor): ";
        cin >> user_choice;
        user_choice = toupper(user_choice);

        int comp_num = rand() % 3;
        if (comp_num == 0)
            comp_choice = 'R';
        else if(comp_num == 1)
            comp_choice = 'P';
        else
            comp_choice = 'S';

        cout << "Your choice: " << user_choice << "\nComputer choice: " << comp_choice << endl;

        if(user_choice == comp_choice)
            cout << "It's a tia\n";
        else if(user_choice == 'R' && comp_choice == 'S' || user_choice == 'P' && comp_choice == 'R' || user_choice == 'S' && comp_choice == 'P')
            cout << "You win\n";
        else
            cout << "Computer win\n";
            
        cout << "Play again?(y/n): "; cin >> user_choice;
        user_choice = toupper(user_choice);
    } while (user_choice != 'y');
    return 0;
}