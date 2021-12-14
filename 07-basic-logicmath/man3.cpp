// 07-basic-logicmath.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void nhap(int* arr, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << " nhap phan tu cua arr [" << i << "] = ";
		cin >> arr[i];
	}
}
int	Timmax(int* arr, int n) {
	int max = arr[0];
	for (size_t i = 1; i < n; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
int	Timmin(int* arr, int n) {
	int min = arr[0];
	for (size_t i = 1; i < n; i++)
	{
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}
int main()
{
	int n; // so phan tu cua mang
	cout << "Number of phan tu: ";
	cin >> n;

	int* arr = new int[n]; // su dung mang dong

	nhap(arr, n);
	int min = Timmin(arr, n);
	int max = Timmax(arr, n);
	cout << "\nMin = " << min << "\n" << "Max =  " << max << endl;
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
