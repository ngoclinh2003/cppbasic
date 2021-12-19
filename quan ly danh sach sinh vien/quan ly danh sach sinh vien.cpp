// quan ly danh sach sinh vien.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
#define MAX 45
struct sinhvien {

	string masv;
	string hoten;
	double toan;
	double hoa;
	double sinh;

};
//khai bao cac nguyen mau ham
void nhapsv(sinhvien& s); //nhap thong tin sv
void nhapdssv(sinhvien arrsv[MAX], int n); //nhap danh sach sv
void thongtinsv(sinhvien arrsv[MAX], int n, string maso); // in thong tin sv theo ma so
void indssv(sinhvien arrsv[MAX], int n);//in danh sach sinh vien
double diemtrungbinh(sinhvien sv); // tinhdiem trung binh cua sinh vien
string xeploaisv(sinhvien sv);
int timsvtheomaso(sinhvien arrsv[MAX], int n, string masv); //tim sv trong danh sach ma so


int main()
{
	sinhvien arrsv[MAX]; //khai bao danh sach chua toi da sinh vien
	int n;
	cout << "nhap so sinh vien: ";
	cin >> n;
	nhapdssv(arrsv, n);
	cout << "nhap ma so sinh vien can tim: ";
	string masv;
	cin >> masv;
	thongtinsv(arrsv, n, masv);
	system("pause");
	return 0;

}
// dinh nghia cac ham
void nhapsv(sinhvien& s) //nhap thong tin sv( truyen tham chieu)
{
	
	cout << " ma so";
	cin >> s.masv;
	cin.ignore();
	cout << "ho ten";
	getline(cin, s.hoten);
	cout << "diem toan ";
	cin >> s.toan;
	cout << "diem hoa ";
	cin >> s.hoa;
	cout << "diem sinh ";
	cin >> s.sinh;
	// do nhap nhieu sinh vien 1 luc nen them dong
	cin.ignore();


}
void nhapdssv(sinhvien arrsv[MAX], int n) //nhap danh sach sv
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap thong tin sinh vien thu " << i + 1 << endl;
		nhapsv(arrsv[i]);
	}
}
void thongtinsv(sinhvien arrsv[MAX], int n, string maso) // in thong tin sv theo ma so
{
	int pos = timsvtheomaso(arrsv, n, maso);
	if (pos != -1)
	{
		cout << "ma so: " << arrsv[pos].masv
			<< "\ho ten: " << arrsv[pos].hoten
			<< "\diem toan: " << arrsv[pos].toan
			<< "\diem hoa: " << arrsv[pos].hoa
			<< "\diem sinh: " << arrsv[pos].sinh << endl;
	}
	else
	{
		cout << "khong co thong tin!\n";
	}
}

void indssv(sinhvien arrsv[MAX], int n)//in danh sach sinh vien
{
	//in hang tieu de
	cout << "stt\tma so\tho ten\t\t\ttrung binh\txep loai\n";
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "\t" << arrsv[i].masv << "\t" << arrsv[i].hoten
			<< setw(30 - arrsv[i].hoten.length()) << diemtrungbinh(arrsv[i])
			<< "\t\t" << xeploaisv(arrsv[i]) << endl;
	}
}
double diemtrungbinh(sinhvien sv) // tinhdiem trung binh cua sinh vien
{
	return (sv.toan + sv.hoa + sv.sinh) / 3;
}
string xeploaisv(sinhvien sv)
{
	double tb = diemtrungbinh(sv);
	string loai;
	if (tb >= 8) loai = "gioi ";
	else if (tb >= 6.5) loai = "kha ";
	else if (tb >= 4) loai = "trung binh ";
	else loai = "duoi trung binh ";
	return loai;
}
int timsvtheomaso(sinhvien arrsv[MAX], int n, string masv) //tim sv trong danh sach ma so
{
	for (int i = 0; i < n; i++)
		if (arrsv[i].masv == masv)
			return i;// tim khong thay tra ve vi tri trong danh sach
	return -1; // tim khong thay tra ve -1
}
//quan ly sv





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
