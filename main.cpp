#include <iostream>

using namespace std;

string password = "";
string guess = "";
const string CHARACTERS = "1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ,./!@#$%^&*()_=+-[]{}|~`<>";

int main()
{
    getline(cin, password);
    guess.resize(password.length());
    
    cout << endl;
    
    for(int i = 0; i < password.length(); i++)
    {
        for(int j = 0; j < CHARACTERS.length(); j++)
        {
            if(guess.at(i) != password.at(i))
            {
                guess.at(i) = CHARACTERS.at(j);
            }
        }
    }
    cout << "The password guessed is: " << guess << endl;
    return 0;
}
