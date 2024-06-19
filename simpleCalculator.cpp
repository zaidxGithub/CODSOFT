#include <iostream>
using namespace std;

int main()

{

    cout << "\n\t\t-----------------------------------------------------" << endl
         << "\t\t#####################################################" << endl
         << "\n\t\t\t\t C A L C U L A T O R" << endl 
         << "\n\t\t#####################################################" << endl
         << "\t\t-----------------------------------------------------" << endl
         << endl;
    while (true)
    {

        cout << "\nEnter 1st Number: ";
        float n1;
        cin >> n1;
        cout << "Enter 2nd Number: ";
        float n2;
        cin >> n2;
        cout << "\nOperations:\n"
                "\n"

                " \tENTER "
             << "1" << " to ADD "

                       " \tENTER "
             << "2" << " to SUBTRACT\n"

                       " \tENTER "
             << "3" << " to MULTIPLY"

                       " \tENTER "
             << "4" << " to DIVIDE\n"

                       " \tENTER "
             << "0" << " to OFF\n"
                       "\n"
                       "Enter your Operation: ";
        float operation;
        cin >> operation;

        if (operation == 1)

        {
            cout << "----------------------------" << endl
                 << "\t" << n1 << " + " << n2 << " = " << n1 + n2 << endl
                 << "----------------------------" << endl;
        }
        else if (operation == 2)
        {
            cout << "----------------------------" << endl
                 << "\t" << n1 << " - " << n2 << " = " << n1 - n2 << endl
                 << "----------------------------" << endl;
        }
        else if (operation == 3)
        {
            cout << "--------------------------------" << endl
                 << "\t" << n1 << " * " << n2 << " = " << n1 * n2 << endl
                 << "--------------------------------" << endl;
        }

        else if (operation == 4)

        {
            if (n2 != 0)
                cout << "---------------------------------" << endl
                     << "\t" << n1 << " / " << n2 << " = " << n1 / n2 << endl
                     << "---------------------------------" << endl;
            else
                cout << "Division by 0 is not allowed " << endl;
        }

        else if (operation == 0)
        {
            cout << "         SWITCHING OFF " << endl
                 << "--------------------------------" << endl;
            exit(0);
        }

        else
            cout << " INVALID OPERATION:" << endl;
    }

    return 0;
}