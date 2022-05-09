#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>

using namespace std;

bool check();

int main()
{
    string username = "yellow";
    string password = "1234";

    bool status = false;

    do
    {
        string enterUser, enterPass;

        int ch;

        cout << "\n \n       Username: ";
        cin >> enterUser;
        cout << "\n \n       Password: ";

        ch = getch();

        while(ch != 13)
        {
            enterPass.push_back(ch);
            cout << 'x';
            ch = getch();
        }

        cout << "\n \n \n";

        if(enterUser == username && enterPass == password)
        {
            cout << "Username and password correct." << endl;

            status = true;
        }
        else
        {
            cout << "Error. Username or password incorrect." << endl;
        }

    } while(status == false);

    return EXIT_SUCCESS;
}