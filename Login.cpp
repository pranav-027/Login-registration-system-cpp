#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool IsLoggedIN()
{
    string username, password, un, pw;
    cout << "Enter Usename: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;

    ifstream read(username + ".txt");
    getline(read, un);
    getline(read, pw);
    if (un == username && pw == password)
    {
        /* code */
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int choise;
    cout << "1: Register\n2: Login \n Your Choice: ";
    cin >> choise;
    if (choise == 1)
    {
        string username, password;
        cout << "select a usename: ";
        cin >> username;
        cout << "select a password: ";
        cin >> password;

        ofstream file;
        file.open(username + ".txt");
        file
            << username << endl
            << password;
        file.close();
        main();
    }
    else if (choise == 2)
    {
        /* code */
        bool status = IsLoggedIN();
        if (!status)
        {
            /* code */
            cout << "False Login" << endl;
            system("PAUSE");
            return 0;
        }
        else
        {
            cout << "successfully logged in!" << endl;
            system("PAUSE");
            return 1;
        }
    }
}