// task41.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream fout;
	int sum = 0;
	fout.open("numbers.txt");
	for (int i = 0; i < 10; i++) {
		int num;
		cout << "Enter the number: \n";
		cin >> num;
		fout << num;
		sum = sum + num;

	}
	fout.close();
	cout << "Result is: \n";
	cout << sum;
	cout << "\n";
	system("pause");
	return 0;




}

