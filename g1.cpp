
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

   
        cout << "\n\t\t-----------------------------------------------------" << endl
             << "\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl
             << "\t\t-----------------------------------------------------" << endl
             << "\n\t\t\t~WELCOME TO NUMBER GUESSING GAME~" << endl                    //Startring UI
             << "\n\t\t-----------------------------------------------------" << endl
             << "\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl
             << "\t\t-----------------------------------------------------" << endl
             << "\n\n\nGuess a number between 1 and 100. Good Luck! " << endl;

    
    int optioGame,option; // Addon by myself:

    cout << "\nCHOOSE OPTION TO PLAY\n" << endl << endl
         << " 1. Play with Limited chances!\t" << "\t 2. Play with unlimited chances!" << endl
      << "\nEnter option to start: ";

    cin >> option;

    if (option== 1)
    {

        while (true)
        {
            cout << "\nChoose the difficulty level: \n"  << "Enter 1. Easy!\t\t"
                 << "Enter 2. Medium!\t" << "Enter 3. hard!\t\t"
                 << "Enter 0. Quit!\n\n\n";

            int levelChoice;        //    Players input of difficulty:
            cout << "Enter your desired Level to play : ";
            cin >> levelChoice;

           
            srand(time(0));   // code to generate random number between 1 and 100:
            int randomNumber = 1 + (rand() % 100);
            int playerInput;

            if (levelChoice == 1)
            {
                cout << "\nYou have 5 chances for finding the Random number between 1 and 100.";
                int chancesLeft = 5;
                for (int i = 1; i <= 5; i++)

                {
                    cout << "\n\nEnter the number: "; // player to enter the number they have guessed:
                    cin >> playerInput;
                    cout << endl;


                    if (playerInput == randomNumber)  // checking if the playerInput matches:
                    {
                        cout << "Well played! You won, " << playerInput << " is the Random number" << endl
                             << "\t\t\t Thanks for playing......" << endl << "Play the game again with us!!!\n "
                                "-----------------------------"  << endl;
                        break;
                    }

                    else
                    {
                        cout << "-----------------------------------------------\n"
                             << "Opps!!!, " << playerInput << " is not the right number\n";

                        int difference = abs(playerInput - randomNumber);
                        if (difference <= 10)
                        {
                            cout << "You're very close to the number!\n";
                        }
                        else if (playerInput > randomNumber)
                        {
                            cout << "Your Guess is too high!!!\n";
                        }
                        else
                        {
                            cout <<"Your Guess is too low!!!\n";
                        }

                        chancesLeft--;
                          cout << "Attention ! " << chancesLeft << " chances left. " << endl
                               << "-----------------------------------------------\n";

                        if (chancesLeft == 0)
                        {
                            cout << "You couldn't find the Random number, it was " << randomNumber
                                 << ", Better Luck Next Time !\n\n" << "Play the game again to  win (*_*)\n"
                                 << "-----------------------------" << endl;
                        }
                    }
                }
            }

           
            else if (levelChoice == 2)  // for level 2:
            {
                cout << "\nYou have 3 chances for finding the Random number between 1 and 100.";
                int chancesLeft = 3;

                for (int i = 1; i <= 3; i++)
                {   
                    cout << "\n\nEnter the number: ";   //  player to guess the randomNumber:
                    cin >> playerInput;
                    cout << endl;

                    if (playerInput == randomNumber)  // determining if the playerInput matches randomNumber:
                    {
                        cout << "Well played! You won, " << playerInput
                             << " is the Random number" << endl  << "\t\t\t Thanks for playing...."   
                             << "-----------------------------"<<endl;
                             
                        break;
                    }

                    else
                    {
                         cout << "-----------------------------------------------\n"
                              << "Opps!!!, " << playerInput << " is not the right number\n";

                        int difference = abs(playerInput - randomNumber);
                        if (difference <= 10)
                        {
                             cout << "You're very close to the number!\n";
                        }
                        else if (playerInput > randomNumber)
                        {
                             cout << "Your Guess is too high!!!\n";
                        }
                        else
                        {
                             cout << "Your Guess is too low!!!\n";
                        }
                        chancesLeft--;
                              cout<< "Attention ! " << chancesLeft << " chance left. " << endl
                                  << "-----------------------------------------------\n";

                        if (chancesLeft == 0)
                        {
                            cout << "You couldn't find the Random number, it was "
                                 << randomNumber << ", Better Luck Next Time !\n\n"
                                 << "Play the game again to win (*_*)\n"
                                 << "-----------------------------" << endl;
                        }
                    }
                }
            }
           
            else if (levelChoice == 3)   // Difficulty level : Medium
            {
                cout << "\nYou have 2 chances for finding the Random number between 1 and 100.";
                int chancesLeft = 2;


                for (int i = 1; i <= 2; i++)
                {
                    cout << "\n\nEnter the number: ";  // prompting the player to guess the Random number:
                    cin >> playerInput;
                    cout << endl;
     
                    if (playerInput == randomNumber) // determining if the playerInput matches Random number:
                    {
                      cout << "Well played! You won....." << playerInput << " is the Random number" << endl
                           << "\t\t\t Thanks for playing...." << endl << "Play the game again with us!!"<<endl
                           <<"-----------------------------"<< endl;       

                        break;
                    }


                    else
                    {
                        cout << "-----------------------------------------------\n";
                        cout << "Opps!!!, " << playerInput << " is not the right number\n";

                        int difference = abs(playerInput - randomNumber);
                        if (difference <= 10)
                        {
                            cout << "You're very close to the number!\n";
                        }
                        else if (playerInput > randomNumber)
                        {
                            cout << "Your Guess is too high!!!\n";
                        }
                        else
                        {
                            cout << "Your Guess is too low!!!\n";
                        }
                        chancesLeft--;
                        cout << "Attention ! " << chancesLeft << " chances left. " << endl
                             << "-----------------------------------------------\n";

                        if (chancesLeft == 0)
                        {
                            cout << "You couldn't find the Random number, it was " << randomNumber
                                 << ", better luck next time !\n\n" << "Play the game again to win (*_*)\n"
                                 << "-----------------------------" << endl;
                        }
                    }
                }
            }
   
            else if (levelChoice == 0)  // to quit:
            {
                cout << "\n\t\t ~|G|A|M|E|  |O|V|E|R|~";
                exit(0);
            }
            else
            {
                cout << "Wrong Level selection, You can only choose the levels given above or Choose to Quit!" << endl;
            }
        }
    }

    else if (option == 2)
    {

            srand(time(0)); // random number generation 
            int randomNumber1 = 1 + (rand() % 100);

        int playerGuess;
        int chances = 1;

        do
        {

              cout << "\n\n Enter you Guess: ";
              cin >> playerGuess;

               int difference1 = abs(playerGuess - randomNumber1);
               cout << "-----------------------------------------------\n";


             cout << "Opps!!!, " << playerGuess << " is not the right number\n";


            if (difference1 <= 20)             
            { 
                    cout << "You're very close to the number!\n";
            }
              else if (playerGuess > randomNumber1){
            
                    cout << "Your Guess is too high!!!\n";
            }
            else
            {
                     cout<< "Your Guess is too low!!!\n";
            }
                cout <<chances<<" chance " <<endl
                 <<"-----------------------------------------------\n";
                 chances++;
        

        }

        while (playerGuess != randomNumber1);
        {
            cout << "\t\t CONGRATULATIONS YOU WON!" << endl
                 << "\n\t\t ~|G|A|M|E|  |O|V|E|R|~";
        }
    }

    else
            cout << " WRONG OPTION SELECTED!  " << endl
             <<"You can only choose 1 or 2: "<<endl
             <<"\n\t\t ~OUT OF GAME~";

    return 0;
}