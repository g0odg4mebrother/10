// project2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <cmath>
#include <iostream>
using namespace std;
int main()
{


    setlocale(LC_ALL, "Russian");
    int height, times;
    cout << " введите высоту\n";
    cin >> height;
    times = sqrt(2 * height / 9.8);
    cout << "ответ" << times << " c";
    return 0;



}