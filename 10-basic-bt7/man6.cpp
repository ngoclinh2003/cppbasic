// 10-basic-bt7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void nhap(int* arr, int n)
{

	for (int i = 1; i <= n; i++)
	{
		cout << " nhap phan tu cua arr [" << i << "] = ";
		cin >> arr[i];
	}
}
int TinhGT(int n) {
	int gt{ 1 };
	for (auto i{ 1 }; i < n; i++)
	{
		gt *= i;
	}
	return gt;
}

double Tinh(int* arr, int n)
{
	int sum{ 0 };
	for (int i = 1; i <= n; i++)
	{
		sum = sum + TinhGT(arr[i]);
	}
	return sum;
}


int main()
{
	int n;
	cout << "Number of phantu: ";
	cin >> n;
	int* arr = new int[n];
	nhap(arr, n);
	cout << Tinh(arr, n);
	return 0;
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
