#include<iostream>
using namespace std;
#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cout << "¬ведите размер массива: "; cin >> n;
	int* arr = new int[n] {};
	FillRand(arr, n);
	Print(arr, n);
	int value; //добавл€емое значение
	cout << "¬ведите добавл€емое значение: "; cin >> value;
	//1. —оздаем новый (буферный) массив нужного размера:
	int* buffer = new int[n + 1]{};
	//2.  опируем все значени€ из исходного массива в буферный:
	for(int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3. ѕосле того как данные скопированы, исходный массив можно удалить:
	delete[] arr;
	//4. ѕодмен€ем адрес в указателе на исходный массив:
	arr = buffer;
	//5. » только после всего этого можно записать новое значение в конец массива:
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