#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int a = 2;
	int& ra = a;
	ra += 3;
	cout << a << endl;
}
/* 
-------------------------------------------
***�������� ���������� �� ������***

������ (Reference) - ��� ����������, �������
�������� ����� ������ ����������.
������ ���������� �� ��������� ���, ��� �
�� ����� ��������������. ���������� ���
��� ������. ����� ���� �� ����� ����� ����� 
���������� �� ������� ��� ���������, ����������
� ��� ��� ������. �� ����� ���������� � ������,
���������� ��������. ������ ������� ������
����� ������������������� ������ ��� ����������.
-------------------------------------------
int -Int
int* - ��������� �� int
int& - ������ �� int
-------------------------------------------
		Errors
1. �� ����� ���������� (Compile error) C � E;
2. ������ �� ����� ���������� (link errors)
	Linker - �����������, �������.
	LNK - Linker;
3. ������ �� ����� ���������� (Runtime errors);

*/