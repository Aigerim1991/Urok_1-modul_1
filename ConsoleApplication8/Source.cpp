#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
red:
	int h;
	cout << "������� ����� �������:" << "\n";
	cin >> h;
	if (h == 1)
	{
		unsigned int a;
		cout << "������� ������:" << "\n";
		cin >> a;
		int d;
		cout << "������� ������:" << "\n";
		cin >> d;
		float q = a / d;
		cout << "�������:" << q << "\n";
		float r = a%d;
		cout << "������� �� �������:" << r << "\n";
	}
	else if (h == 2)
	{
		int x;
		cout << "������� ������:" << "\n";
		cin >> x;
		int y;
		cout << "������� ������:" << "\n";
		cin >> y;
		if ((x == 0) && (y == 0))
		{
			int f = 0;
			cout << f << "������������ 0:" << "\n";
		}
		else if ((x > 0) && (y == 0))
		{
			cout << "���� � ����� 0:" << "\t" << 12 / x << "\n";
		}
		else if ((x == 0) && (y > 0))
		{
			cout << "���� x ����� 0:" << "\t" << 12 / y << "\n";
		}
		else
		{
			cout << "�����:" << "\t" << 144/(x*y) << "\n";
		}
	}
	else if (h == 3)
	{
		int x;
		cout << "������� ������:" << "\n";
		cin >> x;
		int y;
		cout << "������� ������:" << "\n";
		cin >> y;
		if (x > y)
		{
			int f = x - y;
			cout << "���� � ������ �:" << "\t" << f << "\n";
		}
		else
		{
			cout << "���������� �-�:" << "\t" << endl;
		}
	}
	else if (h == 4)
	{
		double x;
		cout << "������� ������:" << "\n";
		cin >> x;
		double y;
		cout << "������� ������:" << "\n";
		cin >> y;
		if (x / y)
		{
			double f = x / y;
			cout << "���� � ������ �:" << "\t" << f << "\n";
			}
		else
		{
			double f = y / x;
			cout << "����������:" << "\t" << f << "\n";
		}
		}
	else if (h == 5)
	{
		double x;
		cout << "������� ������:" << "\n";
		cin >> x;
		double y;
		cout << "������� ������:" << "\n";
		cin >> y;
		double z;
		cout << "������� ������:" << "\n";
		cin >> z;
		int k;
		cout << "������� ������:" << "\n";
		cin >> k;
		int n;
		cout << "������� ������:" << "\n";
		cin >> n;
		float m = (x + y + z) / 2;
		cout << m << "\n";
		if ((x > k) && (y > k) && (z > k) && (x < n) && (y < n) && (z < n))
		{
			double f = m*(n/k);
			cout << "����������:" << "\t" << f << "\n";
		}
		else
		{
			cout << "�� ����������:" << "\t"  << "\n";
		}
		
	}
	else if (h == 6)
	{
		int a;
		cout << "������� ������:" << "\n";
		cin >> a;
		int b;
		cout << "������� ������:" << "\n";
		cin >> b;
		int c;
		cout << "������� ������:" << "\n";
		cin >> c;
		if ((a > b) && (b < c))
		{
			int f = b;
			cout << "���������� ��������:" << f << "\n";
		}
		else if ((a < b) && (a < c))
		{
			int f = a;
			cout << "���������� ��������:" << f << "\n";
		}
		else
		{
			int f = c;
			cout << "���������� ��������:" << f << "\n";
		}
	}
	else if (h == 7)
	{
		int a;
		cout << "������� ������:" << "\n";
		cin >> a;
		int b;
		cout << "������� ������:" << "\n";
		cin >> b;
		int c;
		cout << "������� ������:" << "\n";
		cin >> c;
		if ((a < b) && (b > c))
		{
			int f = b;
			cout << "���������� ��������:" << f << "\n";
		}
		else if ((a > b) && (a > c))
		{
			int f = a;
			cout << "���������� ��������:" << f << "\n";
		}
		else
		{
			int f = c;
			cout << "���������� ��������:" << f << "\n";
		}
	}
	else if (h == 8)
	{
		int x;
		cout << "������� ������:" << "\n";
		cin >> x;
		int y;
		cout << "������� ������:" << "\n";
		cin >> y;
		int z= sqrt (pow (x,2)+pow (y,3));
		cout << z <<"\n" ;
		if ((x > 0) && (y >0))
		{
			
			bool f = z;//True
		}
		else if ((x<0)&&(y>0))
		{
			
			bool f = z;//False
		}
		else
		{
			cout << "�� ����������:" << "\t" << "\n";
		}
	}
	else if (h == 9)
	{
		int x;
		cout << "������� ������:" << "\n";
		cin >> x;
		int y;
		cout << "������� ������:" << "\n";
		cin >> y;
	
		if (x%y >0)
		{
			bool f = x%y;//True
			cout << "������� �� ����:"<< f<<"\n";

		}
		else if (y%x>0)
		{
			bool f = y%x;//True
			cout << "������� �� ����:" << f << "\n";
					}
		else 
		{
			bool f;//False 
			cout << "�� ������� �� ����:" << f << "\n";
		}
	}
	else if (h == 10)
	{
		int x;
		cout << "������� ������:" << "\n";
		cin >> x;
		int y;
		cout << "������� ������:" << "\n";
		cin >> y;
		int z;
		cout << "������� ������:" << "\n";
		cin >> z;
		if ((x > y) && (y < z))
		{
			bool f = y;//True
		
			cout << "����� ���� ��������� ������������:" << f << "\n";
		}
		else
		{
			bool f = y;//False
		
			cout << "�� ����� ���� ��������� ������������:" << f << "\n";

		}

	}


	
	goto red;
	return 0;
}