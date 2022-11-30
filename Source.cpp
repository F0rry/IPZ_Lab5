
#include <iostream>
#include <math.h>

using namespace std;
void checkValidInput()
{
	if (cin.fail())
	{
		throw "Incorrect input";
	}
}
void checkValidParams(int n)
{
	if (n < 4)
	{
		throw "Input correct data";
	}
}
int calculate(int n, int x)
{
	
	double y = 0;
	if (n < 2)
	{
		cout << " Ошибка ";
		return 0;
	}
	else
	
		if (x < 0)
		{
			for (int i = 1; i <= n - 1; i++)
			{
				for (int j = 1; j < 1; j++)
					y += j / (j * j + j) + 999;
			}
		}
		else
			for (int i = 1; i <= n - 1; i++)
				y = (x - i) + 500;
	
	
	return 0;
}

int main() 
{
	setlocale(LC_ALL, "RUS");
	double x, n, j, p, u;
	double y = 0;
	try
	{
	cout << "Введите n>=2, n=";
	cin >> n;
	checkValidInput();
	checkValidParams(n);
	cout << "Введите x= ";
	cin >> x;
	checkValidInput();
	if (n < 2)
	{
		cout << " Ошибка ";
		return 0;
	}
		else
		
	if (x < 0)
	{
		for (int i = 1; i <= n - 1; i++) 
		{
			for (int j = 1; j < 1; j++)
				y += j / (j * j + j);	
		}
	}
	else
		for (int i = 1; i <= n - 1; i++)
			y = x - i;
	cout << "x= " << x << "; " << "y= " << calculate(n,x) << endl;
	x += p; 
	return 0;
	}
	catch (const char* ex)
	{
		cout << ex << endl;
		return -1;
	}
	catch (...)
	{
		cout << "Неизвестная ошибка" << endl;
		return -2;
	}
		
}