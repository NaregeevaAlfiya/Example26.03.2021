#include <iostream>
#include <ctime>
using namespace std;
#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n;
	cout << "������� ������ �������: ";
	cin >> n;
	int* arr = new int [n] {};
	FillRand(arr, n);
	Print(arr, n);
	cout << endl;
	
	//�������� ���������� ������ � �������� ���������
	int even_count = 0; //���������� ������ ��������
	int odd_count = 0; //���������� �������� ��������
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
			even_count++;
		else
			odd_count++;
	}
	cout << "���������� ������ ���������: " << even_count << endl;
	cout << "���������� �������� ���������: " << odd_count << endl;
	//�������� ������ ��� �������� � ������� � ��������� ����������:
	int* even = new int[even_count] {};
	int* odd = new int [odd_count] {};

	//��������� ������ � �������� �������� � �������������� �������:
	for (int i= 0, j = 0, k = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
			even[j++] = arr[i];
			//j++;
		else
			odd[k++] = arr[i];

		//(arr[i] % 2 ? odd[k++] : even[j++]) = arr[i]; //��������� ��������
		//condition ? value 1 : value 2;
		//���� ������� (condition) ������� true, �� ��������� ��������
		//������ value 1, � ��������� ������ - value2;
		//value 1 � value 2 ����������� ������ ���� ������ ����!!!
	}
	cout << "������ ��������: "; Print(even, even_count);
	cout << endl;
	cout << "�������� ���������: "; Print(odd, odd_count);

	Print(even, even_count);
	Print(odd, odd_count);

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


