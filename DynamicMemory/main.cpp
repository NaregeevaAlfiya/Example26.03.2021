#include<iostream>
using namespace std;
#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cout << "������� ������ �������: "; cin >> n;
	int* arr = new int[n] {};
	FillRand(arr, n);
	Print(arr, n);
	int value; //����������� ��������
	cout << "������� ����������� ��������: "; cin >> value;
	//1. ������� ����� (��������) ������ ������� �������:
	int* buffer = new int[n + 1]{};
	//2. �������� ��� �������� �� ��������� ������� � ��������:
	for(int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3. ����� ���� ��� ������ �����������, �������� ������ ����� �������:
	delete[] arr;
	//4. ��������� ����� � ��������� �� �������� ������:
	arr = buffer;
	//5. � ������ ����� ����� ����� ����� �������� ����� �������� � ����� �������:
 	arr[n] = value;
	n++;
	Print(arr, n);

	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
}