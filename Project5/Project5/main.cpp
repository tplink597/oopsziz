#include "Complex.h"
void main()
{
	setlocale(LC_ALL, "Rus");
	double real, imaginary;
	cout << "������� \"����������� �����\" � ����:\n-��������������\n-������\n������ ������������ �����:\nreal = ";
	cin >> real;
	cout << "imagine = ";
	cin >> imaginary;
	Complex z(real, imaginary);
	cout << "z = " << z;
	cout << "\nf(z) = 2z + sin(z - i) = " << Complex(2, 0)*z << " + (" << sin(z- Complex(0, 1)) << ") = " << Complex(2, 0)*z + sin(z - Complex(0, 1));
	_getch();
}

