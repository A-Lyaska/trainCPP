#include <string>
#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

void drawLine() {
	cout.fill('_');
	cout << right << setw(110) << "\n";
	cout.fill(' ');
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int NUM = 3;
	string names[NUM];
	string iniz[NUM];
	int gr[NUM];
	float ok[NUM];

	for (int i = 0; i < NUM; i++) {
		cout << i + 1 << ". Введите через пробел фамилию, инициалы, год рождения и оклад: ";
		cin >> names[i] >> iniz[i] >> gr[i] >> ok[i];
	}

	cout << endl;
	drawLine();
	cout << "|Отдел кадров" << setw(96) << "|" << "\n";
	drawLine();
	cout << left << setw(25) << "|Фамилия" << setw(25) << "|Инициалы" << setw(25) << "|Год рождения" << setw(33) << "|Оклад "  << "|" << "\n";
	drawLine();

	for (int j = 0; j < NUM; j++) {
		cout << left << "|" << setw(24) << names[j] << "|" << setw(24) << iniz[j] << "|" << setw(24) << gr[j] << "|" << setw(32) << ok[j] << "|\n";
	}

	drawLine();
	cout << right << "|Примечание: оклад установлен по состоянию на 1 января 2000 года" << setw(45) << "|" << "\n";
	drawLine();
	cout << endl;

	system("pause");
	return 0;

}