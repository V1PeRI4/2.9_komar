
#include <iostream>
using namespace std;

void fillMass(double* mass, int length);
double searchFirstNum(double* mass, int length);
void clear(double* mass);

int main()
{
	setlocale(LC_ALL, "Russian");
	double* mass;
	int n;

	cout << "Введите длинну последовательности: ";
	cin >> n;
	mass = new double[n];

	cout << "Последовательность: ";
	fillMass(mass, n);
	cout << "Номер элемента больше введенного числа: " << searchFirstNum(mass, n);
	clear(mass);
}



void fillMass(double* mass, int length)
{
	for (int i = 1; i <= length; i++)
	{
		mass[i] = 1 / (pow(i, 3) + 3);
		cout << mass[i] << " ";
	}
	cout << endl;
}

double searchFirstNum(double* mass, int length)
{
	double result = 0, b;

	cout << "Введите чилсо: ";
	cin >> b;

	for (int i = 1; i <= length; i++)
	{
		if (b > mass[i])
		{
			return i;
		}
	}
	return -1;
}

void clear(double* mass)
{
	delete[]mass;
}
