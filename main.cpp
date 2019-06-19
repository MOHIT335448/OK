#include <iostream>

using namespace std;

int main()
{
    string name,profession,date;

    cout << "Enter your name" << endl;
    getline(cin,name);
    cout << "Enter your profession" << endl;
    getline(cin,profession);
    cout << "Enter date" << endl;
    getline(cin,date);

    cout << name << " is a CEO of GOOGLE" << endl;
    cout << "he is a fucking " << profession << endl;
    cout << "he had a sex on " << date << " with akash" << endl;


    return 0;
}
