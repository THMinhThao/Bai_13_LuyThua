// Bai13_LuyThua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Tinh Luy Thua" << endl;

	int so, mu, luythua = 1;
	cout << "Nhap so: "; cin >> so;
	cout << "Nhap mu: "; cin >> mu;
	for (int i = 0; i < mu; i++)
	{
		luythua *= so;
	}
	cout << so << " ^ " << mu << " = " << luythua;

	return 0;
}

