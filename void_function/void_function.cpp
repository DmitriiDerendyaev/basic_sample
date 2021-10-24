#include <iostream>
#include <string>

using namespace std;


void task1(void)
{

}

void task2(void)
{

}

void task3()
{

}

void task4()
{

}

void task5()
{

}

void task6()
{

}

int main()
{
	setlocale(LC_ALL, "Russian");
	int z, count_task, count = 0;
	cout << "Введите количество операций:";
	cin >> count_task;
	cout << "Введите номер задания : ";
	cin >> z;
	while (count < count_task)
	{
		switch (z)
		{
		case 1:
		{
			task1();
			count++;
			break;
		}
		case 2:
		{
			task2();
			count++;
			break;
		}
		case 3:
		{
			task3();
			count++;
			break;
		}
		case 4:
		{
			task4();
			count++;
			break;
		}
		case 5:
		{
			task5();
			count++;
			break;
		}
		case 6:
		{
			task6();
			count++;
			break;
		}
		case 0:
		{
			cout << "Stop";
			return 0;
			break;
		}
		default:
			break;
		}
		cout << "Выберите номер задания или 0 для завершения работы:";
		cin >> z;
	}
	return 0;
}