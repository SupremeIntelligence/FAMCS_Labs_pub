﻿// Evdokimov Laba 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<time.h>
using namespace std;
bool IsSimple(int x)
{ 
    int k = 0;

    for (int i = 1;i < x;i++)
    {
        if (x % i == 0)
        {
            k++;
        }
    }
    if (x > 1)
    {
        if (k < 2)
        {
            return true; //если простое
        }
        else
        {
            return false; //если составное
        }
    }
    else
    {
        return false; // если 1, т.к оно не простое число
    }
}

int main()
{
	setlocale(LC_ALL, "RUS");
    int mas[100] = { 0 };
    int mas2[100] = { 0 };
    int numb, numb2, counter{ 1 }, j{ 0 };
	cout << "Введите размерность массива до 100: ";
	cin >> numb;
    numb2 = numb-1;
	srand(time(NULL));
	for (int i = 0; i < numb; i++)
	{
		mas[i] = rand() % 100 - 50;
		cout << counter << ". " << mas[i] << endl;
		counter++;
	}
    counter = 1;
    cout << "Простые элементы: " << endl;
    for (int i = 0; i < numb; i++)
    {
        
        if (IsSimple(mas[i]) == true)
        {
            counter = 1 + i;
            cout << counter << ". " << mas[i] << endl;
            mas2[numb2] = mas[i];
            numb2--;
        }
        else
        {
            mas2[j] = mas[i];
            j++;
        }

    }
    cout <<endl << "Все простые элементы справа:"<< endl;
    counter = 1;
    for (int i = 0; i < numb; i++)
    {
        cout << "№" << counter << ". " << mas2[i] << "     ";
        counter++;
    }
        
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
