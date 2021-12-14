// 03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    std::cout << "Enter number of student: ";
    short number;
    cin >> number;

    cin.ignore(1000, '\n');

    string name[50];
    short age[50];
    string klass[50];
    short avg[50];


    double math[50], physical[50], chemistry[50];

    for (int i = 0; i < number; ++i)
    {
        cout << "Enter name student " << i + 1 << " : ";
        getline(cin, name[i]);
        cout << "Enter age " << i + 1 << " : ";
        cin >> age[i];
        cin.ignore(1000, '\n');
        cout << "Enter klass: ";
        getline(cin, klass[i]);
        /*cout << name[i] << '\n';
        cout << age[i] << '\n';
        cout << klass[i] << '\n';*/

        cout << "Enter marks: ";
        cin >> math[i] >> physical[i] >> chemistry[i];
        avg[i] = (math[i] + physical[i] + chemistry[i]) / 3;

        cin.ignore(1000, '\n');
    }
    for (int i = 0; i < number; i++)
    {
        cout << "student" << i + 1 << ":" << name[i];
        cout << "math: " << math[i] << '\n';
        cout << "physical: " << physical[i] << '\n';
        cout << "chemistry: " << chemistry[i] << '\n';
        cout << "avg: " << avg[i] << '\n';

    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
