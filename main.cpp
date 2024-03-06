#include <iostream> 
#include <string>

using namespace std;

int main()
{
    //This program will print the user's name back to them
    string userName = "";
    string prompt = "Hi! Enter your name please!";

    cout << prompt << endl;
    cin >> userName;

    cout << "\nYour name is: " << userName << endl << endl;

    return 0;
}