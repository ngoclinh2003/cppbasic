// bai tap tinh diem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
struct diemso
{
	std::string ho_ten;
	int tuoi;
	float mon_toan;
	float mon_ly;
	float mon_hoa;
	int diem_so_3_mon[3];
    //khai báo bi?n
};


void diem_trung_binh_mon(diemso so)
{
	float diem_trung_binh = (so.mon_toan + so.mon_ly + so.mon_hoa) / 3;
	std::string ket_qua;
	if (diem_trung_binh < 5)
	{
		ket_qua = "truot mon";
	}
	else if (diem_trung_binh > 5)
	{
		ket_qua = " cx kha";
	}
	else
	{
		ket_qua = "good chop em";
	}
		std::cout << "ket qua cua ban: " << so.ho_ten << " " << ket_qua << std::endl;
        // tính ?i?m trung bình 3 môn
}

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

        //khai báo nhi?u sinh viên v?i nh?ng ?i?m s? khác nhau
    } 


	diemso so;
	so.ho_ten = "ngoc linh ";
	so.tuoi = 18;
	so.mon_toan = 7;
	so.mon_ly = 8;
	so.mon_hoa = 9;

	diem_trung_binh_mon(so);

	system("pause");

	return 0;
    //khai báo ?i?m s? ?? tính trung bình môn
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
