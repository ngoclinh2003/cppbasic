// 06-basic-logic-loop-array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b; // ax +b = 0
    float Ketqua = 0;
    cout << "Enter number of a, b : ";
    cin >> a >> b;
    if (a == 0 && b == 0)
    {
        cout << "Phuong trinh co vo so nghiem! " << endl;

    }
    else if (a == 0 && b != 0)
    {
        cout << "Phuong trinh vo nghiem " << endl;

    }
    else
    {
        Ketqua = -b * 1.0 / a;
        cout << "Nghiem phuong trinh: " << a << "x" << " + " << b << " = 0 , la x = " << Ketqua << endl;
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
