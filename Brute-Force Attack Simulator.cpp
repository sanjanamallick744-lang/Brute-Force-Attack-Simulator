#include <iostream>
#include <string>

using namespace std;

int main()
{
    string password;
    string characters = "abc";
    int attempts = 0;
    bool found = false;

    cout << "========================================" << endl;
    cout << "      BRUTE-FORCE ATTACK SIMULATOR     " << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "Enter a dummy password using only a, b, c" << endl;
    cout << "Maximum length: 3 characters" << endl;
    cout << "Password: ";
    cin >> password;

    /* Check password length */
    if (password.length() > 3 || password.length() == 0)
    {
        cout << endl;
        cout << "Invalid password length." << endl;
        cout << "Please use 1 to 3 characters." << endl;
        return 0;
    }

    /* Try one-character combinations */
    for (int i = 0; i < 3 && !found; i++)
    {
        string guess = "";
        guess += characters[i];

        attempts++;

        cout << "Attempt " << attempts << " : " << guess << endl;

        if (guess == password)
        {
            cout << endl;
            cout << "Password Found!" << endl;
            cout << "Password       : " << guess << endl;
            cout << "Total Attempts : " << attempts << endl;
            found = true;
        }
    }

    /* Try two-character combinations */
    for (int i = 0; i < 3 && !found; i++)
    {
        for (int j = 0; j < 3 && !found; j++)
        {
            string guess = "";
            guess += characters[i];
            guess += characters[j];

            attempts++;

            cout << "Attempt " << attempts << " : " << guess << endl;

            if (guess == password)
            {
                cout << endl;
                cout << "Password Found!" << endl;
                cout << "Password       : " << guess << endl;
                cout << "Total Attempts : " << attempts << endl;
                found = true;
            }
        }
    }

    /* Try three-character combinations */
    for (int i = 0; i < 3 && !found; i++)
    {
        for (int j = 0; j < 3 && !found; j++)
        {
            for (int k = 0; k < 3 && !found; k++)
            {
                string guess = "";
                guess += characters[i];
                guess += characters[j];
                guess += characters[k];

                attempts++;

                cout << "Attempt " << attempts << " : " << guess << endl;

                if (guess == password)
                {
                    cout << endl;
                    cout << "Password Found!" << endl;
                    cout << "Password       : " << guess << endl;
                    cout << "Total Attempts : " << attempts << endl;
                    found = true;
                }
            }
        }
    }

    if (!found)
    {
        cout << endl;
        cout << "Password could not be found." << endl;
        cout << "Total Attempts : " << attempts << endl;
    }

    cout << endl;
    cout << "========================================" << endl;
    cout << " Educational simulation only." << endl;
    cout << " No real account or system was accessed." << endl;
    cout << "========================================" << endl;

    cout << endl;
    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}
